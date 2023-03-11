#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int* create_array_int(int N);
int* copy_array_int(const int* ptr, int N);
void display_array_int(const int* ptr, int N);
void destroy_allocated_mem(int *ptr);

int main() {
    int N = 0;

    printf("Podaj rozmiar tablicy:");
    if (!scanf("%d", &N)) {
        printf("Incorrect input");
        return 1;
    }

    if (N <= 0) {
        printf("Incorrect input data");
        return 2;
    }

    while (getchar() != '\n');

    int *arr1 = create_array_int(N);
    if (arr1 == NULL) {
        printf("Failed to allocate memory");
        return 8;
    }

    printf("Podaj liczby:\n");
    for (int i = 0; i < N; i++) {
        if (!scanf("%d", (arr1 + i))) {
            printf("Incorrect input");
            free(arr1);
            return 1;
        }
    }

    int *arr2 = copy_array_int(arr1, N);

    if (arr2 == NULL) {
        printf("Failed to allocate memory");
        free(arr1);
        return 8;
    }

    display_array_int(arr1, N);
    printf("\n");
    display_array_int(arr2, N);

    destroy_allocated_mem(arr1);
    destroy_allocated_mem(arr2);
    return 0;
}

int* create_array_int(int N) {
    if (N <= 0) {
        return NULL;
    }

    return calloc(N, sizeof(int));
}

int* copy_array_int(const int* ptr, int N) {
    if (ptr == NULL || N <= 0) return NULL;

    int *arr = create_array_int(N);

    if (arr == NULL) return NULL;

    for (int i = 0; i < N; i++) {
        *(arr + i) = *(ptr + i);
    }

    return arr;
}

void display_array_int(const int* ptr, int N) {
    if (ptr != NULL && N > 0) {
        for (int i = 0; i < N; i++) {
            printf("%d ", *(ptr + i));
        }
    }
}

void destroy_allocated_mem(int *ptr) {
    if (ptr != NULL) {
        free(ptr);
    }
}
