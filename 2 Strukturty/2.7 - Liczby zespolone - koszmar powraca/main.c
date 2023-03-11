#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "tested_declarations.h"
#include "rdebug.h"

struct complex_t {
    float re;
    float im;
};

float my_abs(float a) {
    return a > 0 ? a : -1 * a;
}
struct complex_t* set(struct complex_t* cp, float re, float im, int *err_code);
float complex_abs(struct complex_t* cp, int * err_code);
void show(const struct complex_t* cp);

int main() {
    int err_code = 0;
    int *err_code_p = &err_code;
    float abs1 = 0.0f, abs2 = 0.0f;
    float re1 = 0.0f, im1 = 0.0f, re2 = 0.0f, im2 = 0.0f;
    char op1 = 0, op2 = 0;
    struct complex_t cm1, cm2;
    struct complex_t *cm1_p = &cm1, *cm2_p = &cm2;

    printf("Enter a complex number");
    if ((scanf("%f %c i%f", &re1, &op1, &im1) != 3) || (op1 != '-' && op1 != '+') || im1 < 0) {
        printf("Incorrect input");
        return 1;
    }

    while (getchar() != '\n');

    printf("Enter a complex number");
    if ((scanf("%f %c i%f", &re2, &op2, &im2) != 3) || (op2 != '-' && op2 != '+') || im2 < 0) {
        printf("Incorrect input");
        return 1;
    }

    if (op1 == '-') im1 *= -1;
    if (op2 == '-') im2 *= -1;

    if (!set(cm1_p, re1, im1, err_code_p) || !set(cm2_p, re2, im2, err_code_p)) {
        printf("Incorrect input");
        return 1;
    }

    show(cm1_p);
    show(cm2_p);

    abs1 = complex_abs(cm1_p, err_code_p);
    abs2 = complex_abs(cm2_p, err_code_p);

    abs1 == abs2 ? printf("EQUAL") : (abs1 > abs2 ? printf("FIRST") : printf("SECOND"));

    return 0;
}

struct complex_t* set(struct complex_t* cp, float re, float im, int *err_code) {
    if (cp == NULL) {
        if (err_code != NULL) *err_code = 1;
        return NULL;
    }
    if (err_code != NULL) *err_code = 0;

    cp -> re = re;
    cp -> im = im;

    return cp;
}

float complex_abs(struct complex_t* cp, int * err_code) {
    if (cp == NULL) {
        if (err_code != NULL) *err_code = 1;
        return -1;
    }
    if (err_code != NULL) *err_code = 0;

    float re1 = cp -> re, im1 = cp -> im;
    return (float)sqrt(pow(re1, 2) + pow(im1, 2));
}

void show(const struct complex_t* cp) {
    if (cp != NULL) {
        printf("%.2f %c i%.2f\n", cp -> re, (cp -> im < 0)*'-'+(cp -> im > 0)*'+', my_abs(cp -> im));
    }
}
