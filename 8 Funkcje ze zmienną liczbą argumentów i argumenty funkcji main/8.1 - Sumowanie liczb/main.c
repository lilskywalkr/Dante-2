#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int stats(int *sum, float *avg, int num, ...);

int main() {
    int sum = 0, num = 0, a = 0;
    float avg = 0.0f;

    printf("Enter number of elements:");
    if (!scanf("%d", &num)) {
        printf("Incorrect input");
        return 1;
    }

    while (getchar() != '\n');

    if (num <= 0 || num > 3) {
        printf("Incorrect input data");
        return 2;
    }

    int *arr = calloc(num, sizeof(int));

    if (arr == NULL) {
        printf("Failed to allocate memory");
        return 8;
    }

    printf("Enter numbers:");
    for (int i = 0; i < num; i++) {
        if (!scanf("%d", &a)) {
            printf("Incorrect input");
            free(arr);
            return 1;
        }
        *(arr + i) = a;
    }

    switch (num) {
        case 1:
            stats(&sum, &avg, num, *(arr + 0));
            break;
        case 2:
            stats(&sum, &avg, num, *(arr + 0), *(arr + 1));
            break;
        case 3:
            stats(&sum, &avg, num, *(arr + 0), *(arr + 1), *(arr + 2));
            break;
        default:
            break;
    }

    printf("%d %f", sum, avg);

    free(arr);
    return 0;
}

int stats(int *sum, float *avg, int num, ...) {
    if (sum == NULL || avg == NULL || num <= 0) return 1;

    va_list args;
    va_start(args, num);

    *sum = 0, *avg = 0.0f;

    for (int i = 0; i < num; i++) {
        *sum += va_arg(args, int);
    }

    *avg = (float)*sum / (float)num;
    va_end(args);

    return 0;
}

