#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "tested_declarations.h"
#include "rdebug.h"

struct point_t {
    int x;
    int y;
};

struct point_t* read(struct point_t* p);
int save_points_b(const char *filename, const struct point_t* p, unsigned int N);

int main() {
    struct point_t p[100];
    struct point_t *p_p = (void *)&p;
    char filename[31] = {0};
    char *f1_p = (char *)&filename;
    int N = 0;

    printf("Enter a number of points:\n");
    if (!scanf("%d", &N)) {
        printf("Incorrect input");
        return 1;
    }

    if (N <= 0) {
        printf("Incorrect input data");
        return 2;
    }

    N += (N > 100 ? -N + 100 : 0);
    printf("Enter points:\n");

    for (int i = 0; i < N; i++) {
        if (!read(p_p + i)) {
            printf("Incorrect input");
            return 1;
        }
    }

    printf("Enter file name:\n");
    scanf("%30[^\n]", f1_p);
    if (save_points_b(f1_p, p_p, N) == 2) {
        printf("Couldn't create file");
        return 5;
    }

    printf("File saved");

    return 0;
}

struct point_t* read(struct point_t* p) {
    if (p == NULL) return NULL;
    int x1 = 0, y1 = 0;

    if (scanf("%d %d", &x1, &y1) != 2) return NULL;

    while (getchar() != '\n');

    p -> x = x1;
    p -> y = y1;

    return p;
}

int save_points_b(const char *filename, const struct point_t* p, unsigned int N) {
    if (!N || filename == NULL || p == NULL) return 1;

    FILE *f1_p;
    f1_p = fopen(filename, "wb");

    if (f1_p == NULL) return 2;

    for (int i = 0; i < (int)N; i++) {
        fwrite(p + i, sizeof(int), 2, f1_p);
    }

    fclose(f1_p);

    return 0;
}
