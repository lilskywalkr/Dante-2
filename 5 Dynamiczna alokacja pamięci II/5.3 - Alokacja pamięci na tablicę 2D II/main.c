#include <stdio.h>
#include <stdlib.h>

int create_array_2d_2(int ***ptr, int width, int height);
void destroy_array_2d(int ***ptr, int height);
void display_array_2d(int **ptr, int width, int height);
int sum_array_2d(int **ptr, int width, int height);
int sum_row(int *ptr, int width);

int main() {
    int width = 0, height = 0, a = 0, n = 0, sum = 0;
    int **arr;

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

    n = create_array_2d_2(&arr, width, height);

    if (n == 2) {
        printf("Failed to allocate memory");
        return 8;
    }

    printf("Podaj liczby:\n");
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (!scanf("%d", &a)) {
                printf("incorrect input");
                destroy_array_2d(&arr, height);
                return 1;
            }
            *(*(arr + i) + j) = a;
        }
    }

    display_array_2d(arr, width, height);
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            sum += *(*(arr + i) + j);
        }
        printf("%d\n", sum);
        sum = 0;
    }

    printf("%d", sum_array_2d(arr, width, height));
    destroy_array_2d(&arr, height);
    return 0;
}

int create_array_2d_2(int ***ptr, int width, int height) {
    if (ptr == NULL || width <= 0 || height <= 0) return 1;

    *ptr = calloc(height, sizeof(int *));
    if (*ptr == NULL) return 2;

    for (int i = 0; i < height; i++) {
        *(*ptr + i) = calloc(width, sizeof(int));
        if (*(*ptr + i) == NULL) {
            for (int j = 0; j < i; j++) {
                free(*(*ptr + j));
            }
            free(*ptr);
            return 2;
        }
    }

    return 0;
}

void destroy_array_2d(int ***ptr, int height) {
    if (ptr != NULL && height > 0) {
        for (int i = 0; i < height; i++) {
            if (*(*ptr + i) != NULL) {
                free(*(*ptr + i));
            }
        }
        free(*ptr);
        *ptr = NULL;
    }
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

int sum_row(int *ptr, int width) {
    if (ptr == NULL || width <= 0) return -1;

    int sum = 0;
    for (int  i = 0; i < width; i++) {
        sum += *(ptr + i);
    }

    return sum;
}

int sum_array_2d(int **ptr, int width, int height) {
    if (ptr == NULL || width <= 0 || height <= 0) return -1;

    int sum = 0;

    for (int i = 0; i < height; i++) {
        sum += sum_row(*(ptr + i), width);
    }

    return sum;
}


