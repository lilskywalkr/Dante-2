#include <stdio.h>
#include <stdlib.h>

#include "comparators.h"

int main() {
    int size = 0, num = 0, choice = 0;

    ptr_func *funcs = calloc(4, sizeof(ptr_func));

    if (funcs == NULL) {
        printf("Failed to allocate memory");
        return 8;
    }

    *(funcs + 0) = comp_int;
    *(funcs + 1) = comp_int_abs;
    *(funcs + 2) = comp_int_length;
    *(funcs + 3) = comp_int_digits_sum;

    printf("Podaj dlugosc tablicy:");
    if (!scanf("%d", &size)) {
        printf("Incorrect input");
        free(funcs);
        return 1;
    }

    while (getchar() != '\n');

    if (size <= 0) {
        printf("Incorrect input data");
        free(funcs);
        return 2;
    }

    int *tab = calloc(size, sizeof(int));

    if (tab == NULL) {
        printf("Failed to allocate memory");
        free(funcs);
        return 8;
    }

    printf("Podaj liczby:");

    for (int i = 0; i < size; i++) {
        if (!scanf("%d", &num)) {
            printf("Incorrect input");
            free(funcs);
            free(tab);
            return 1;
        }
        *(tab + i) = num;
    }

    while (getchar() != '\n');

    printf("Podaj rodzaj operacji:");

    if (!scanf("%d", &choice)) {
        printf("Incorrect input");
        free(funcs);
        free(tab);
        return 1;
    }

    while (getchar() != '\n');

    if (choice != 0 && choice != 1 && choice != 2 && choice != 3) {
        printf("Incorrect input data");
        free(funcs);
        free(tab);
        return 2;
    }

    sort_int(tab, size, *(funcs + choice));

    display_array(tab, size);

    free(funcs);
    free(tab);
    return 0;
}


