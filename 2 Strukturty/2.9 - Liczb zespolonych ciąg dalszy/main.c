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

struct complex_t* set(struct complex_t* cp, float re, float im, int *err_code);
int read(struct complex_t* cp);
float complex_abs(struct complex_t* cp, int * err_code);
void show(const struct complex_t* cp);
int add(const struct complex_t *first, const struct complex_t *second, struct complex_t* result);
int subtract(const struct complex_t *first, const struct complex_t *second, struct complex_t* result);
int multiply(const struct complex_t *first, const struct complex_t *second, struct complex_t* result);
int divide(const struct complex_t *first, const struct complex_t *second, struct complex_t* result);

int main() {
    int n = 0;
    struct complex_t cm1, cm2, cm3;
    struct complex_t *cm1_p = &cm1, *cm2_p = &cm2, *cm3_p = &cm3;

    printf("Enter first number:\n");
    n = read(cm1_p);
    if (n == 1) {
        printf("Incorrect input");
        return 1;
    }
    printf("Enter second number:\n");
    n = read(cm2_p);
    if (n == 1) {
        printf("Incorrect input");
        return 1;
    }

    add(cm1_p, cm2_p, cm3_p);
    show(cm3_p);
    subtract(cm1_p, cm2_p, cm3_p);
    show(cm3_p);
    multiply(cm1_p, cm2_p, cm3_p);
    show(cm3_p);
    if (divide(cm1_p, cm2_p, cm3_p) == 2) {
        printf("Operation not permitted");
    } else {
        show(cm3_p);
    }

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

int read(struct complex_t* cp) {
    if (cp == NULL) return 1;

    float re1 = 0.0f, im1 = 0.0f;
    char op1 = 0;

    if ((scanf("%f %c i%f", &re1, &op1, &im1) != 3) || (op1 != '-' && op1 != '+') || im1 < 0) return 1;

    while (getchar() != '\n');

    if (op1 == '-' && im1) im1 *= -1;

    if (!set(cp, re1, im1, 0)) return 1;

    return 0;
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
        printf("%f %c i%f\n", cp -> re, (cp -> im < 0.0)*'-'+(cp -> im >= 0.0)*'+', (float)fabs((double)(cp -> im)));
    }
}

int add(const struct complex_t *first, const struct complex_t *second, struct complex_t* result) {
    if (first == NULL || second == NULL || result == NULL) return 1;

    result -> re = first -> re + second -> re;
    result -> im = first -> im + second -> im;

    return 0;
}

int subtract(const struct complex_t *first, const struct complex_t *second, struct complex_t* result) {
    if (first == NULL || second == NULL || result == NULL) return 1;

    result -> re = first -> re - second -> re;
    result -> im = first -> im - second -> im;

    return 0;
}

int multiply(const struct complex_t *first, const struct complex_t *second, struct complex_t* result) {
    if (first == NULL || second == NULL || result == NULL) return 1;

    float a1 = first -> re, b1 = first -> im, a2 = second -> re, b2 = second -> im;

    float useless_variable = complex_abs(result, 0);
    useless_variable *= 0;
    result -> re = (a1*a2 - b1*b2 + useless_variable);
    result -> im = (a1*b2 + a2*b1 + useless_variable);

    return 0;
}

int divide(const struct complex_t *first, const struct complex_t *second, struct complex_t* result) {
    if (first == NULL || second == NULL || result == NULL) return 1;

    float a1 = first -> re, b1 = first -> im, a2 = second -> re, b2 = second -> im;

    if (!a2 && !b2) return 2;
    else {
        result -> re = (a1*a2 + b1*b2)/(a2*a2 + b2*b2);
        result -> im = (a2*b1 - a1*b2)/(a2*a2 + b2*b2);
    }

    return  0;
}

