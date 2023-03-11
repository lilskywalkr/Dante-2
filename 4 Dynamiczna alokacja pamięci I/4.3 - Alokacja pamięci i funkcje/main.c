#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float* create_array(int N);

int main() {
    int N = 0;

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

    float *arr = create_array(N);
    if (arr == NULL) {
        printf("Failed to allocate memory");
        return 8;
    }

    printf("Podaj liczby:\n");
    for (int i = 0; i < N; i++) {
        if(!scanf("%f", (arr + i))) {
            printf("Incorrect input");
            free(arr);
            return 1;
        }
    }

    printf("\n");
    for (int i = N - 1; i >= 0; i--) {
        printf("%f ", *(arr + i));
    }

    free(arr);
    return 0;
}

float* create_array(int N) {
    if (N <= 0) return NULL;

    float *arr = calloc(N, sizeof(float));

    return arr;
}
