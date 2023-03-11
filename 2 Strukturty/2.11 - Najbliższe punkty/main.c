#include <stdio.h>
#include <math.h>
#include <limits.h>
#include "tested_declarations.h"
#include "rdebug.h"

#define swap(a, b) {int c = 0; c = a; a = b; b = c;}

struct point_t {
    int x;
    int y;
};

struct point_t* set(struct point_t* p, int x, int y);
float distance(const struct point_t* p1, const struct point_t* p2, int *err_code);

int main() {
    struct point_t p1, p2;
    struct point_t *p1_p = &p1, *p2_p = &p2;
    char filename[100];
    char *f_name = (void *)&filename;
    int n = 0, x1 = 0, y1 = 0, x2 = 0, y2= 0, number_of_points = 0;
    int X1 = 0, Y1 = 0, X2 = 0, Y2 = 0;
    float min = (float)INT_MAX;
    FILE* f1_p;

    printf("Enter file name:\n");
    scanf("%99[^\n]", f_name);

    while (getchar() != '\n');

    f1_p = fopen(f_name, "r");

    if (f1_p == NULL) {
        printf("Couldn't open file");
        return 4;
    }

    while ((n = fscanf(f1_p, "%d %d", &x1, &y1)) != EOF) {
        if (n != 2) {
            printf("File corrupted");
            fclose(f1_p);
            return 6;
        }
        number_of_points += 1;
    }

    if (number_of_points == 1) {
        printf("File corrupted");
        fclose(f1_p);
        return 6;
    }

    fseek(f1_p, 0, SEEK_SET);

    for (int i = 0; i < number_of_points - 1; i++) {
        fscanf(f1_p, "%d %d", &x1, &y1);
        int init_line = ftell(f1_p);
        while (fscanf(f1_p, "%d %d", &x2, &y2) != EOF) {
            if (min > distance(set(p1_p, x1, y1), set(p2_p, x2, y2),0)) {
                min = distance(set(p1_p, x1, y1), set(p2_p, x2, y2),0);
                X1 = x1;
                Y1 = y1;
                X2 = x2;
                Y2 = y2;
            }
        }
        fseek(f1_p, init_line, SEEK_SET);
    }

    fseek(f1_p, 0, SEEK_SET);

    for (int i = 0; i < number_of_points - 1; i++) {
        fscanf(f1_p, "%d %d", &x1, &y1);
        int init_line = ftell(f1_p);
        while (fscanf(f1_p, "%d %d", &x2, &y2) != EOF) {
            if (min == distance(set(p1_p, x1, y1), set(p2_p, x2, y2),0)) {
                if (X1 > x1 && X2 > x2) {
                    X1 = x1;
                    Y1 = y1;
                    X2 = x2;
                    Y2 = y2;
                }
            }
        }
        fseek(f1_p, init_line, SEEK_SET);
    }

    if (X1 > X2) {
        swap(X1, X2)
        swap(Y1, Y2)
    }
    printf("%d %d %d %d", X1, Y1, X2, Y2);

    fclose(f1_p);

    return 0;
}

struct point_t* set(struct point_t* p, int x, int y) {
    if (p == NULL) return NULL;
    p -> x = x;
    p -> y = y;
    return p;
}

float distance(const struct point_t* p1, const struct point_t* p2, int *err_code) {
    if (p1 == NULL || p2 == NULL) {
        if (err_code != NULL) *err_code = 1;
        return -1;
    }
    int x_1 = p1 -> x;
    int y_1 = p1 -> y;
    int x_2 = p2 -> x;
    int y_2 = p2 -> y;

    if (err_code != NULL) *err_code = 0;
    return (float)sqrt(pow(x_1 - x_2, 2) + pow(y_1 - y_2, 2));
}
