#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include "tested_declarations.h"
#include "rdebug.h"

struct point_t {
    int x;
    int y;
};

struct point_t* set(struct point_t* p, int x, int y);
void show(const struct point_t* p);
int save_point_b(const char *filename, const struct point_t* p);
int load_point_b(const char *filename, struct point_t* p);
int save_point_t(const char *filename, const struct point_t* p);
int load_point_t(const char *filename, struct point_t* p);

int main() {
    srand(time(NULL));
    char nazwa_zmiennej[31];
    char *filename = (void *)&nazwa_zmiennej;
    struct point_t p;
    struct point_t *p_p = &p;
    char ch = 0;

    set(p_p, rand() % 10, rand() % 10);
    show(p_p);
    printf("Podaj sciezke do pliku:\n");
    scanf("%30[^\n]", filename);

    while (getchar() != '\n');

    if (*(filename + strlen(filename) - 1) == 't' &&
    *(filename + strlen(filename) - 2) == 'x' &&
    *(filename + strlen(filename) - 3) == 't' &&
    *(filename + strlen(filename) - 4) == '.') {
        if (save_point_t(filename, p_p) == 2) {
            printf("Couldn't create file");
            return 5;
        }

        printf("File saved\n");
        printf("Do you want to read the file (Y/N)?:");
        scanf("%c", &ch);

        if ((ch == 'Y' || ch == 'y')) {
            int n = load_point_t(filename, p_p);
            if (n == 1 || n == 3) {
                printf("File corrupted");
                return 6;
            } else if (n == 2) {
                printf("Couldn't open file");
                return 4;
            }
            show(p_p);
        }
        if (ch != 'y' && ch != 'Y' && ch != 'n' && ch != 'N'){
            printf("Incorrect input");
            return 1;
        }
    } else if (*(filename + strlen(filename) - 1) == 'n' &&
               *(filename + strlen(filename) - 2) == 'i' &&
               *(filename + strlen(filename) - 3) == 'b' &&
               *(filename + strlen(filename) - 4) == '.') {
        if (save_point_b(filename, p_p) == 2) {
            printf("Couldn't create file");
            return 5;
        }

        printf("File saved\n");
        printf("Do you want to read the file (Y/N)?:");
        scanf("%c", &ch);

        if ((ch == 'Y' || ch == 'y') && (ch != 'n' && ch != 'N')) {
            int n = load_point_b(filename, p_p);
            if (n == 1 || n == 3) {
                printf("File corrupted");
                return 6;
            } else if (n == 2) {
                printf("Couldn't open file");
                return 4;
            }
            show(p_p);
        }
        if (ch != 'y' && ch != 'Y' && ch != 'n' && ch != 'N'){
            printf("Incorrect input");
            return 1;
        }
    } else {
        printf("Unsupported file format");
        return 7;
    }

    return 0;
}

struct point_t* set(struct point_t* p, int x, int y) {
    if (p == NULL) return NULL;
    p -> x = x;
    p -> y = y;
    return p;
}

void show(const struct point_t* p) {
    if (p != NULL) printf("x = %d; y = %d\n", p -> x, p -> y);
}

int save_point_b(const char *filename, const struct point_t* p) {
    if (filename == NULL || p == NULL) return 1;

    FILE * f_p;
    f_p = fopen(filename, "wb");

    if (f_p == NULL) return 2;

    fwrite(&(p -> x), (int)sqrt((int)sizeof(int) * (int)sizeof(int)), 1, f_p);
    fwrite(&(p -> y), (int)sqrt((int)sizeof(int) * (int)sizeof(int)), 1, f_p);
    fclose(f_p);

    return 0;
}

int load_point_b(const char *filename, struct point_t* p) {
    if (filename == NULL || p == NULL) return 1;

    FILE * f_p;
    f_p = fopen(filename, "rb");

    if (f_p == NULL) return 2;

    int n = fread(&(p -> x), (int)sqrt((int)sizeof(int) * (int)sizeof(int)), 1, f_p);
    if (n == EOF || !n) {
        fclose(f_p);
        return 3;
    }
    n = fread(&(p -> y), (int)sqrt((int)sizeof(int) * (int)sizeof(int)), 1, f_p);
    if (n == EOF || !n) {
        fclose(f_p);
        return 3;
    }
    fclose(f_p);

    return 0;
}

int save_point_t(const char *filename, const struct point_t* p) {
    if (filename == NULL || p == NULL) return 1;

    FILE * f_p;
    f_p = fopen(filename, "w");

    if (f_p == NULL) return 2;

    fprintf(f_p, "%d %d", p -> x, p -> y);
    fclose(f_p);

    return 0;
}

int load_point_t(const char *filename, struct point_t* p) {
    if (filename == NULL || p == NULL) return 1;

    FILE * f_p;
    f_p = fopen(filename, "r");

    if (f_p == NULL) return 2;

    int n = fscanf(f_p, "%d %d", &(p -> x), &(p -> y));
    if (n == EOF || n != 2) {
        fclose(f_p);
        return 3;
    }

    fclose(f_p);

    return 0;
}
