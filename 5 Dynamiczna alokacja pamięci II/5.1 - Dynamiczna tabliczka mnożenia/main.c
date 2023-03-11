#include <stdio.h>
#include <stdlib.h>

int main() {
    int **arr = calloc(10, sizeof(int *));

    if (arr == NULL) {
        printf("Failed to allocate memory");
        return 8;
    }

    for (int i = 0; i < 10; i++) {
        *(arr + i) = calloc(10, sizeof(int));
        if (*(arr + i) == NULL) {
            for (int j = 0; j < i; j++) {
                free(*(arr + j));
            }
            printf("Failed to allocate memory");
            free(arr);
            return 8;
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            *(*(arr + i) + j) = ((i + 1 ) * (j + 1));
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%4d", *(*(arr + j) + i));
        }
        printf("\n");
    }

    for (int i = 0; i < 10; i++) {
        free(*(arr + i));
    }
    free(arr);
    return 0;
}

