#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int create_array_int(int **ptr, int N);
void destroy_array_int(int **ptr);

int main() {
    int N = 0, n = 0;
    int *arr;

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

    n = create_array_int(&arr, N);
    if (n == 2) {
        printf("Failed to allocate memory");
        return 8;
    }

    printf("Podaj liczby:\n");

    for (int i = 0; i < N; i++) {
        if (!scanf("%d", (arr + i))) {
            printf("Incorrect input");
            destroy_array_int(&arr);
            return 1;
        }
    }

    for (int i = N - 1; i >= 0; i--) {
        printf("%d ", *(arr + i));
    }

    destroy_array_int(&arr);
    return 0;
}

int create_array_int(int **ptr, int N) {
    if (ptr == NULL || N <= 0) return 1;

    *ptr = calloc(N, sizeof(int));

    if (*ptr == NULL) return 2;

    return 0;
}

void destroy_array_int(int **ptr) {
    if (ptr != NULL) {
        free(*ptr);
        *ptr = NULL;
    }
}
