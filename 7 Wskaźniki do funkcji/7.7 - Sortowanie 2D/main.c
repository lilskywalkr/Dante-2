#include <stdio.h>
#include <stdlib.h>

#include "comparators.h"

int main() {
    int width = 0, height = 0, num = 0, choice = 0 , **tab;
    ptr_func *function = calloc(3, sizeof(ptr_func));

    if (function == NULL) {
        printf("Failed to allocate memory");
        return 8;
    }

    *(function + 0) = comp_min;
    *(function + 1) = comp_max;
    *(function + 2) = comp_sum;

    printf("Enter width and height:");
    if (scanf("%d %d", &width, &height) != 2) {
        printf("Incorrect input");
        free(function);
        return 1;
    }

    if (width <= 0 || height <= 0) {
        printf("Incorrect input data");
        free(function);
        return 2;
    }

    tab = calloc(height, sizeof(int *));

    if (tab == NULL) {
        printf("Failed to allocate memory");
        free(function);
        return 8;
    }

    for (int i = 0; i < height; i++) {
        *(tab + i) = calloc(width, sizeof(int));
        if (*(tab + i) == NULL) {
            for (int j = 0; j < i; j++) {
                free(*(tab + j));
            }
            free(tab);
            free(function);
            printf("Failed to allocate memory");
            return 8;
        }
    }

    printf("Enter data:\n");

    for (int i = 0; i < height; i++) {
        for (int  j = 0; j < width; j++) {
            if (!scanf("%d", &num)) {
                printf("Incorrect input");
                for (int k = 0; k < height; k++) {
                    free(*(tab + k));
                }
                free(tab);
                free(function);
                return 1;
            }
            *(*(tab + i) + j) = num;
        }

        while (getchar() != '\n');
    }

    printf("Selection choice:");
    if (!scanf("%d", &choice)) {
        printf("Incorrect input");
        for (int k = 0; k < height; k++) {
            free(*(tab + k));
        }
        free(tab);
        free(function);
        return 1;
    }

    if (choice != 0 && choice != 1 && choice != 2) {
        printf("Incorrect input data");
        for (int k = 0; k < height; k++) {
            free(*(tab + k));
        }
        free(tab);
        free(function);
        return 2;
    }

    sort_rows(tab, width, height, *(function + choice));

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            printf("%d ", *(*(tab + i) + j));
        }
        printf("\n");
    }

    for (int k = 0; k < height; k++) {
        free(*(tab + k));
    }
    free(tab);
    free(function);

    return 0;
}



