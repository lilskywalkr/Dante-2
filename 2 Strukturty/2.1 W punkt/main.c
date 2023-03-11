#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include "tested_declarations.h"
#include "rdebug.h"

struct point_t {
    int x;
    int y;
};

struct point_t* set(struct point_t* p, int x, int y);
void show(const struct point_t* p);
struct point_t* read(struct point_t* p);
float distance(const struct point_t* p1, const struct point_t* p2, int *err_code);

int main() {
    srand(time(NULL));

    int err_code = 0;
    int *err_code_p = &err_code;
    struct point_t p1;
    struct  point_t *p1_p = &p1;
    struct point_t p2;
    struct  point_t *p2_p = &p2;

    if(!read(p1_p)) return 1;

    set(p2_p, rand() % 10, rand() % 10);
    show(p1_p);
    show(p2_p);

    float dis = distance(p1_p, p2_p, err_code_p);
    if (dis != -1) printf("%.2f", dis);

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

struct point_t* read(struct point_t* p) {
    if (p == NULL) return NULL;
    int x1 = 0, y1 = 0;

    printf("Podaj wsporzedna x:");
    if (!scanf("%d", &x1)) {
        printf("Incorrect input");
        return NULL;
    }

    while (getchar() != '\n');

    printf("Podaj wspolrzedna y:");
    if (!scanf("%d", &y1)) {
        printf("Incorrect input");
        return NULL;
    }

    set(p, x1, y1);

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
