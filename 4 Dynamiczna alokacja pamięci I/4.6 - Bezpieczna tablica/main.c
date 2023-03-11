#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "array.h"

int main() {
    struct array_t a;
    struct array_t *a_p = (struct array_t *)&a;
    int N = 0, value = 1, flag_full = 0, flag_empty = 0;

    printf("Podaj rozmiar tablicy:");
    if (!scanf("%d", &N)) {
        printf("Incorrect input");
        return 1;
    }

    while (getchar() != '\n');

    if (N <= 0) {
        printf("Incorrect input data");
        return 2;
    }

    if (array_create(a_p, N) == 2) {
        printf("Failed to allocate memory");
        return 8;
    }

    printf("Podaj liczby:\n");

    do {
        if (!scanf("%d", &value)) {
            printf("Incorrect input");
            array_destroy(a_p);
            return 1;
        }

        while (getchar() != '\n');

        if (value) {
            if (array_push_back(a_p, value) == 2) {
                flag_full = 1;
            }
        }

        if (!(a_p -> size)) {
            flag_empty = 1;
        }
    } while (value);

    if (flag_full) {
        printf("Buffer is full\n");
    } else if (flag_empty == 1) {
        printf("Buffer is empty");
    }

    array_display(a_p);
    array_destroy(a_p);
    return 0;
}
