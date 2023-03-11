//
// Created by ronnie on 31.03.2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#include "comparators.h"

int comp_min(const int *ptr1, const int *ptr2, int width) {
    if (ptr1 == NULL || ptr2 == NULL || width <= 0) return  2;

    int ptr1_min = INT_MAX, ptr2_min = INT_MAX;

    for (int i = 0; i < width; i++) {
        if (*(ptr1 + i) < ptr1_min) ptr1_min = *(ptr1 + i);
        if (*(ptr2 + i) < ptr2_min) ptr2_min = *(ptr2 + i);
    }

    if (ptr1_min > ptr2_min) return 1;
    if (ptr1_min < ptr2_min) return -1;

    return 0;
}
int comp_max(const int *ptr1, const int *ptr2, int width) {
    if (ptr1 == NULL || ptr2 == NULL || width <= 0) return  2;

    int ptr1_max = INT_MIN, ptr2_max = INT_MIN;

    for (int i = 0; i < width; i++) {
        if (*(ptr1 + i) > ptr1_max) ptr1_max = *(ptr1 + i);
        if (*(ptr2 + i) > ptr2_max) ptr2_max = *(ptr2 + i);
    }

    if (ptr1_max > ptr2_max) return 1;
    if (ptr1_max < ptr2_max) return -1;

    return 0;
}

int comp_sum(const int *ptr1, const int *ptr2, int width) {
    if (ptr1 == NULL || ptr2 == NULL || width <= 0) return  2;

    int ptr1_sum = 0, ptr2_sum = 0;

    for (int i = 0; i < width; i++) {
        ptr1_sum += *(ptr1 + i);
        ptr2_sum += *(ptr2 + i);
    }

    if (ptr1_sum > ptr2_sum) return 1;
    if (ptr1_sum < ptr2_sum) return -1;

    return 0;
}

void swap(int **row1, int **row2) {
    if (row1 != NULL && row2 != NULL) {
        int *tmp = *row1;
        *row1 = *row2;
        *row2 = tmp;
    }
}

int sort_rows(int **tab, int width, int height, ptr_func function) {
    if (tab == NULL || height <= 0 || width <= 0 || (function != comp_max && function != comp_min && function != comp_sum)) return 1;

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < height - i - 1; j++) {
            if (function(*(tab + j), *(tab + j + 1), width) > 0) {
                swap(tab + j, tab + j + 1);
            }
        }
    }

    return 0;
}


