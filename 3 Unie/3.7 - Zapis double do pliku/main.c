#include <stdio.h>
#include <math.h>
#include <limits.h>

union double_to_char_t {
    double d;
    char tab[8];
};

int save_double(const union double_to_char_t *dtc, const char *filename);
int load_double(union double_to_char_t *dtc, const char *filename);

int main() {
    double a = 0.0;
    union double_to_char_t uni;
    char filename1[39], filename2[39];
    int n = 0;

    printf("Enter a number:");
    if (!scanf("%lf", &a)) {
        printf("Incorrect input");
        return 1;
    }

    uni.d = a;

    while (getchar() != '\n');

    printf("Enter the file name:");
    scanf("%39[^\n]", filename1);

    n = save_double(&uni, filename1);
    if (n == 2) {
        printf("couldn't create file");
        return 5;
    }

    while (getchar() != '\n');
    printf("File saved\n");

    printf("Enter the file name: ");
    scanf("%39[^\n]", filename2);

    while (getchar() != '\n');

    n = load_double(&uni, filename2);
    if (n == 2) {
        printf("couldn't open file");
        return 4;
    } else if (n == 3) {
        printf("File corrupted");
        return 6;
    }

    printf("%lf", uni.d);

    return 0;
}

int save_double(const union double_to_char_t *dtc, const char *filename) {
    if (dtc == NULL || filename == NULL) return 1;

    FILE *f1_p;
    f1_p = fopen(filename, "w");

    if (f1_p == NULL) {
        return 2;
    }

    for (int i = 0; i < (int)sizeof(double); i++) {
        fprintf(f1_p, "%c", *(dtc->tab + i));
    }

    int ch;
    for (int i = 0; i < (int)sizeof(double); i++) {
        int n = fscanf(f1_p, "%d", &ch);
        if (!n) {
            fclose(f1_p);
            return 3;
        }
    }

    fseek(f1_p, 0, SEEK_SET);
    fclose(f1_p);

    return 0;
}

int load_double(union double_to_char_t *dtc, const char *filename) {
    if (dtc == NULL || filename == NULL) return 1;

    FILE *f1_p;
    f1_p = fopen(filename, "r");

    if (f1_p == NULL) {
        return 2;
    }

    for (int i = 0; i < (int)sizeof(double); i++) {
        int n = fread(dtc->tab + i, 1, 1, f1_p);
        if (!n) {
            fclose(f1_p);
            return 3;
        }
    }

    fclose(f1_p);

    return 0;
}
