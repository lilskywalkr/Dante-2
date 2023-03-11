//
// Created by ronnie on 31.03.2022.
//

#include <stdio.h>
#include <stdlib.h>

#include "comparators.h"

int comp_int(const void *ptr1, const void *ptr2) {
    if (ptr1 == NULL || ptr2 == NULL) return 0;

    int *num1 = (int *)ptr1;
    int *num2 = (int *)ptr2;

    if (*num1 > *num2) return 1;
    if (*num1 < *num2) return -1;

    return 0;
}

int comp_double(const void *ptr1, const void *ptr2) {
    if (ptr1 == NULL || ptr2 == NULL) return 0;

    double *num1 = (double *)ptr1;
    double *num2 = (double *)ptr2;

    if (*num1 > *num2) return 1;
    if (*num1 < *num2) return -1;

    return 0;
}

int comp_point(const void *ptr1, const void *ptr2) {
    if (ptr1 == NULL || ptr2 == NULL) return 0;

    if (((struct point_t*)ptr1) -> x > ((struct point_t*)ptr2) -> x) return 1;
    if (((struct point_t*)ptr1) -> x < ((struct point_t*)ptr2) -> x) return -1;
    else {
        if (((struct point_t*)ptr1) -> y > ((struct point_t*)ptr2) -> y) return 1;
        if (((struct point_t*)ptr1) -> y < ((struct point_t*)ptr2) -> y) return -1;
    }

    return 0;
}

void swap(void *ptr1, void *ptr2, int width) {
    if (ptr1 != NULL && ptr2 != NULL) {
        for (int i = 0; i < width; i++) {
            char tmp = *((char*)ptr1+i);
            *((char*)ptr1+i) = *((char*)ptr2+i);
            *((char*)ptr2+i) = tmp;
        }
    }
}

int sort(void *tab, int width, int t_size, ptr_func function) {
    if (tab == NULL || width <= 0 || function == NULL) return 1;

    for (int i = 0; i < width - 1; i++) {
        for (int j = 0; j < width - i - 1; j++) {
            if (function((char*)tab + j * t_size, (char*)tab + (j + 1) * t_size) > 0) {
                swap((char *) tab + j * t_size, (char *) tab + (j + 1) * t_size, t_size);
            }
        }
    }

    return 0;
}


