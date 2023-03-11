#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <math.h>

#include "format_type.h"

struct statistic_t {
    int min;
    int max;
    float avg;
    float standard_deviation;
    int range;
};

int load(const char *filename, int ***ptr, enum save_format_t format);
int statistics_row(int **ptr, struct statistic_t **stats);
void destroy(int ***ptr);
void display(int **ptr);

int main() {
    char *filename = calloc(40, sizeof(char));
    struct statistic_t *stats_p;
    int **ptr;
    int n = 0;

    if (filename == NULL) {
        printf("Failed to allocate memory");
        return 8;
    }

    printf("Podaj nazwe pliku:");
    scanf("%39s", filename);

    while(getchar() != '\n');

    int l = (int) strlen(filename);
    if (l >= 5 && *(filename + (l - 1)) == 'n' && *(filename + (l - 2)) == 'i' && *(filename + (l - 3)) == 'b' && *(filename + (l - 4)) == '.') {
        n = load(filename, &ptr, fmt_binary);
    } else if (l >= 5 && *(filename + (l - 1)) == 't' && *(filename + (l - 2)) == 'x' && *(filename + (l - 3)) == 't' && *(filename + (l - 4)) == '.') {
        n = load(filename, &ptr, fmt_text);
    } else {
        printf("Unsupported file format");
        free(filename);
        return 7;
    }

    free(filename);

    if (n == 2) {
        printf("Couldn't open file");
        return 4;
    } else if (n == 3) {
        printf("File corrupted");
        return 6;
    } else if (n == 4) {
        printf("Failed to allocate memory");
        destroy(&ptr);
        return 8;
    }

    n = statistics_row(ptr, &stats_p);

    if (n == -2) {
        printf("Failed to allocate memory");
        destroy(&ptr);
        return 8;
    }

    for (int i = 0; i < n; i++) {
        printf("%d %d %d %0.2f %0.2f\n", (stats_p + i) -> min, (stats_p + i) -> max, (stats_p + i) -> range, (stats_p + i) -> avg, (stats_p + i) -> standard_deviation);
    }

    free(stats_p);
    stats_p = NULL;
    destroy(&ptr);
    return 0;
}

int load(const char *filename, int ***ptr, enum save_format_t format) {
    if (filename == NULL || ptr == NULL || (format != fmt_text && format != fmt_binary)) return 1;

    FILE *f_p;
    int width = 0, height = 0, a = 0, n = 0, nums = 0;

    if (format == fmt_binary) {
        f_p = fopen(filename, "rb");
        if (f_p == NULL) {
            return 2;
        }

        while (!feof(f_p)) {
            n = fread(&a, sizeof(int), 1, f_p);
            if (ferror(f_p)) {
                fclose(f_p);
                return 3;
            }

            height += (a == -1 && n ? 1 : 0);
            nums += (n ? 1 : 0);
        }

        if (!nums) {
            fclose(f_p);
            return 3;
        }

        *ptr = calloc(height + 1, sizeof(int *));
        if (*ptr == NULL) {
            fclose(f_p);
            return 4;
        }

        height = 0;
        fseek(f_p, 0, SEEK_SET);
        while(!feof(f_p)) {
            n = (int)fread(&a, sizeof(int), 1, f_p);
            if (n == 1) width += 1;

            if (a == -1 && n) {
                *(*ptr + height) = calloc(width, sizeof(int));
                if (*(*ptr + height) == NULL) {
                    for (int i = 0; i < height; i++) {
                        free(*(*ptr + i));
                    }
                    free(*ptr);
                    *ptr = NULL;
                    fclose(f_p);
                    return 4;
                }

                height += 1;
                width = 0;
            }
        }

        *(*ptr + height) = NULL;

        width = 0;
        height = 0;
        fseek(f_p, 0, SEEK_SET);
        while(!feof(f_p)) {
            n = (int) fread(&a, sizeof(int), 1, f_p);
            if (n) {
                *(*(*ptr + height) + width) = a;
                width += 1;
            }
            if (a == -1 && n) {
                height += 1;
                width = 0;
            }
        }
    }

    if (format == fmt_text) {
        f_p = fopen(filename, "r");
        if (f_p == NULL) {
            return 2;
        }

        while((n = fscanf(f_p, "%d", &a)) !=  EOF) {
            if (!n) {
                fclose(f_p);
                return 3;
            }
            height += (a == -1 ? 1 : 0);
            nums++;
        }

        if (!nums) {
            fclose(f_p);
            return 3;
        }

        *ptr = calloc(height + 1, sizeof(int *));
        if (*ptr == NULL) {
            fclose(f_p);
            return 4;
        }

        height = 0;
        fseek(f_p, 0, SEEK_SET);
        while(fscanf(f_p, "%d", &a) != EOF) {
            width += 1;

            if (a == -1) {
                *(*ptr + height) = calloc(width, sizeof(int));
                if (*(*ptr + height) == NULL) {
                    for (int i = 0; i < height; i++) {
                        free(*(*ptr + i));
                    }
                    free(*ptr);
                    *ptr = NULL;
                    fclose(f_p);
                    return 4;
                }

                height += 1;
                width = 0;
            }
        }

        *(*ptr + height) = NULL;

        width = 0;
        height = 0;
        fseek(f_p, 0, SEEK_SET);
        while(fscanf(f_p, "%d", &a) != EOF) {
            *(*(*ptr + height) + width) = a;
            width += 1;

            if (a == -1 && n) {
                height += 1;
                width = 0;
            }
        }
    }

    fclose(f_p);
    return 0;
}

int statistics_row(int **ptr, struct statistic_t **stats) {
    if (ptr == NULL || stats == NULL) return -1;

    int cnt = 0;
    int max = INT_MIN, min = INT_MAX, range = 0, nums = 0;
    float avg = 0.0f, standard_deviation = 0.0f;
    for (; *(ptr + cnt) != NULL; cnt++);

    *stats = calloc(cnt, sizeof(struct statistic_t));
    if (*stats == NULL) {
        return -2;
    }

    for (int i = 0; *(ptr + i) != NULL; i++) {
        for (int j = 0; *(*(ptr + i) + j) != -1; j++) {
            if (*(*(ptr + i) + j) > max) max = *(*(ptr + i) + j);
            if (*(*(ptr + i) + j) < min) min = *(*(ptr + i) + j);
            avg += (float)*(*(ptr + i) + j);
            nums += 1;
        }

        range += max - min;
        if (avg) {
            avg /= (float) nums;

            if (nums) {
                for (int j = 0; *(*(ptr + i) + j) != -1; j++) {
                    standard_deviation += (float)pow((float)*(*(ptr + i) + j) - avg, 2);
                }
                standard_deviation = (float)sqrtf(standard_deviation / (float)nums);
            }
        }
        else {
            avg = -1;
            standard_deviation = -1;
        }

        if (min == INT_MAX) min = -1;
        if (max == INT_MIN) max = -1;
        if (min == -1 && max == -1) range = -1;

        (*stats + i) -> min = min;
        (*stats + i) -> max = max;
        (*stats + i) -> avg = avg;
        (*stats + i) -> range = range;
        (*stats + i) -> standard_deviation = standard_deviation;

        range = 0;
        avg = 0.0f;
        min = INT_MAX;
        max = INT_MIN;
        nums = 0;
        standard_deviation = 0.0f;
    }

    return cnt;
}

void destroy(int ***ptr) {
    if (*ptr != NULL) {
        for (int i = 0; *(*ptr + i) != NULL; i++) {
            free(*(*ptr + i));
        }
        free(*ptr);
        *ptr = NULL;
    }
}

void display(int **ptr) {
    if (ptr != NULL) {
        for (int i = 0; *(ptr + i) != NULL; i++) {
            for (int j = 0; *(*(ptr + i) + j) != -1; j++) {
                printf("%d ", *(*(ptr + i) + j));
            }
            printf("\n");
        }
    }
}

