//
// Created by ronnie on 31.03.2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "comparators.h"

int comp_int(int a, int b) {
    if (a > b) return 1;
    if (a < b) return -1;
    return 0;
}

int comp_int_abs(int a, int b) {
    if (abs(a) > abs(b)) return 1;
    if (abs(a) < abs(b)) return -1;
    return 0;
}

int comp_int_length(int a, int b) {
    if (dig_len(a) > dig_len(b)) return 1;
    if (dig_len(a) < dig_len(b)) return -1;
    return 0;
}

int comp_int_digits_sum(int a, int b) {
    if (sum_of_digits(a) > sum_of_digits(b)) return 1;
    if (sum_of_digits(a) < sum_of_digits(b)) return -1;
    return 0;
}

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int sort_int(int *tab, int size, ptr_func function) {
    if (tab == NULL || size <= 0 || (function != comp_int && function != comp_int_abs && function != comp_int_length && function != comp_int_digits_sum)) return 1;

    for (int i = 0; i < size - 1; i++){
        for (int j = 0; j < size - i - 1; j++) {
            if (function == comp_int) {
                if (comp_int(*(tab + j), *(tab + j + 1)) > 0) {
                    swap(tab + j, tab + j + 1);
                }
            } else if (function == comp_int_abs) {
                if (comp_int_abs(*(tab + j), *(tab + j + 1)) > 0) {
                    swap(tab + j, tab + j + 1);
                }
            } else if (function == comp_int_length) {
                if (comp_int_length(*(tab + j), *(tab + j + 1)) > 0) {
                    swap(tab + j, tab + j + 1);
                }
            } else {
                if (comp_int_digits_sum(*(tab + j), *(tab + j + 1)) > 0) {
                    swap(tab + j, tab + j + 1);
                }
            }
        }
    }

    return 0;
}

int dig_len(int a) {
    if (!a) return 1;

    int size = 0;
    while (a) {
        size += 1;
        a = a / 10;
    }
    return size;
}

int sum_of_digits(int number) {
    if (!number) return (int)number;
    return abs(number % 10) + sum_of_digits(number / 10);
}

void display_array(const int *tab, int size) {
    if (tab != NULL && size > 0) {
        for (int i = 0; i < size; i++) {
            printf("%d ", *(tab + i));
        }
        printf("\n");
    }
}

