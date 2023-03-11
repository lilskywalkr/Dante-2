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

struct segment_t {
    struct point_t start;
    struct point_t end;
};

struct segment_t* read_segment(struct segment_t* p);
void show_segment(const struct segment_t* p);
float length(const struct segment_t* s, int *err_code);

int main() {
    int err_code = 0;
    int *err_code_p = &err_code;
    float len = 0.0f;
    struct segment_t s1;
    struct segment_t *s1_p = &s1;

    if (!read_segment(s1_p)) {
        printf("Incorrect input");
        return 1;
    }

    show_segment(s1_p);
    len = length(s1_p, err_code_p);
    if (len != -1) printf("%.2f", len);

    return 0;
}

struct segment_t* read_segment(struct segment_t* p) {
    if (p == NULL) return NULL;
    int x1 = 0, y1 = 0, x2 = 0, y2 = 0;

    printf("Enter coordinates of the first point\n");

    printf("Enter X coordinate:");
    if(!scanf("%d", &x1)) return NULL;

    while (getchar() != '\n');

    printf("Enter Y coordinate:");
    if(!scanf("%d", &y1)) return NULL;

    while (getchar() != '\n');
    p -> start . x = x1;
    p -> start . y = y1;

    printf("Enter coordinates of the second point\n");

    printf("Enter X coordinate:");
    if(!scanf("%d", &x2)) return NULL;

    while (getchar() != '\n');

    printf("Enter Y coordinate:");
    if(!scanf("%d", &y2)) return NULL;

    while (getchar() != '\n');
    p -> end . x = x2;
    p -> end . y = y2;

    return p;
}

void show_segment(const struct segment_t* p) {
    if (p != NULL) {
        printf("Line start coords: x = %d; y = %d\n", p->start.x, p->start.y);
        printf("Line end coords: x = %d; y = %d\n", p->end.x, p->end.y);
    }
}

float length(const struct segment_t* s, int *err_code) {
    if (s == NULL) {
        if (err_code != NULL) *err_code = 1;
        return -1;
    }

    if (err_code != NULL) *err_code = 0;

    int x1 = s -> start . x, y1 = s -> start . y, x2 = s -> end . x, y2 = s -> end . y;
    return (float) sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

