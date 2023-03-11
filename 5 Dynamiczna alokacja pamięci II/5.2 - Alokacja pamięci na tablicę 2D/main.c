#include <stdio.h>
#include <stdlib.h>

int **create_array_2d(int width, int height);
void display_array_2d(int **ptr, int width, int height);
void destroy_array_2d(int **ptr, int height);

int main() {
    int width = 0, height = 0, a = 0;

    printf("Podaj szerokość i wysokość:");
    if (scanf("%d %d", &width, &height) != 2) {
        printf("incorrect input");
        return 1;
    }

    while (getchar() != '\n');

    if (width <= 0 || height <= 0) {
        printf("incorrect input data");
        return 2;
    }

    int **arr = create_array_2d(width, height);

    if (arr == NULL) {
        printf("Failed to allocate memory");
        return 8;
    }

    printf("Podaj liczby:\n");
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (!scanf("%d", &a)) {
                printf("incorrect input");
                destroy_array_2d(arr, height);
                return 1;
            }
            *(*(arr + i) + j) = a;
        }
    }

    display_array_2d(arr, width, height);
    destroy_array_2d(arr, height);
    return 0;
}

void destroy_array_2d(int **ptr, int height) {
    if (ptr != NULL && height <= 0) {
        free(ptr);
    }
}

int **create_array_2d(int width, int height) {
    if (width <= 0 || height <= 0) return NULL;

    int **arr = calloc(height, sizeof(int *));
    if (arr == NULL) return NULL;

    for (int i = 0; i < height; i++) {
        *(arr + i) = calloc(width, sizeof(int));
        if (*(arr + i) == NULL) {
            for (int j = 0; j < i; j++) {
                free(*(arr + j));
            }
            free(arr);
            return NULL;
        }
    }

    for (int j = 0; j < height; j++) {
        free(*(arr + j));
    }
    free(arr);
    return arr;
}

void display_array_2d(int **ptr, int width, int height) {
    if (ptr != NULL && width > 0 && height > 0) {
        for (int i = 0; i < height; i++) {
            for (int j = 0; j < width; j++) {
                printf("%d ", *(*(ptr + i) + j));
            }
            printf("\n");
        }
    }
}


