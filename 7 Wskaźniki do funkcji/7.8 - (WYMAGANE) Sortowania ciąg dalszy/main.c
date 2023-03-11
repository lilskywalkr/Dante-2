#include <stdio.h>
#include <stdlib.h>

#include "comparators.h"

int main() {
    int choice = 0, size = 0;

    printf("Enter data type:");
    if (!scanf("%d", &choice)) {
        printf("Incorrect input");
        return 1;
    }

    while (getchar() != '\n');

    if (choice != 0 && choice != 1 && choice != 2) {
        printf("Incorrect input data");
        return 2;
    }

    printf("Enter array size:");
    if (!scanf("%d", &size)) {
        printf("Incorrect input");
        return 1;
    }

    if (size <= 0) {
        printf("Incorrect input data");
        return 2;
    }

    ptr_func *function = calloc(3, sizeof(ptr_func));

    if (function == NULL) {
        printf("Failed to allocate memory");
        return 8;
    }

    *(function + 0) = comp_int;
    *(function + 1) = comp_double;
    *(function + 2) = comp_point;

    if (choice == 0) {
        int *tab = calloc(size, sizeof(int));
        int a = 0;

        if (tab == NULL) {
            printf("Failed to allocate memory");
            free(function);
            return 8;
        }

        printf("Enter values:\n");
        for (int i = 0; i < size; i++) {
            if (!scanf("%d", &a)) {
                printf("Incorrect input");
                free(function);
                free(tab);
                return 1;
            }
            *(tab + i) = a;
        }

        sort(tab, size, sizeof(int), *(function + 0));

        for (int i = 0; i < size; i++) {
            printf("%d ", *(tab + i));
        }

        free(tab);
    } else if (choice == 1) {
        double *tab = calloc(size, sizeof(double ));
        double a = 0.0f;

        if (tab == NULL) {
            printf("Failed to allocate memory");
            free(function);
            return 8;
        }

        printf("Enter values:\n");
        for (int i = 0; i < size; i++) {
            if (!scanf("%lf", &a)) {
                printf("Incorrect input");
                free(function);
                free(tab);
                return 1;
            }
            *(tab + i) = a;
        }

        sort(tab, size, sizeof(double), *(function + 1));

        for (int i = 0; i < size; i++) {
            printf("%lf ", *(tab + i));
        }

        free(tab);
    } else {
        struct point_t *tab = calloc(size, sizeof(struct point_t));
        double a = 0.0f, b = 0.0f;

        if (tab == NULL) {
            printf("Failed to allocate memory");
            free(function);
            return 8;
        }

        printf("Enter values:\n");
        for (int i = 0; i < size; i++) {
            if (scanf("%lf %lf", &a, &b) != 2) {
                printf("Incorrect input");
                free(function);
                free(tab);
                return 1;
            }
            (tab + i) -> x = a;
            (tab + i) -> y = b;
        }

        sort(tab, size, sizeof(struct point_t), *(function + 2));

        for (int i = 0; i < size; i++) {
            printf("%lf %lf\n", (tab + i) -> x, (tab + i) -> y);
        }

        free(tab);
    }

    free(function);
    return 0;
}


