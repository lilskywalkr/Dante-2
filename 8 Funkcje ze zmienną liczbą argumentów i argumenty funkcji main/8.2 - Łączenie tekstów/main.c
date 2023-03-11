#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

int concatenate(char *res, int buffer_size, int number_of_texts, ...);

int main() {
    int number_of_texts = 0, buffer_size = 0;
    char **arr, *res;

    res = calloc(4004, sizeof(char));
    if (res == NULL) {
        printf("Failed to allocate memory");
        return 8;
    }

    arr = calloc(4, sizeof(char *));
    if (arr == NULL) {
        printf("Failed to allocate memory");
        free(res);
        return 8;
    }

    for (int i = 0; i < 4; i++) {
        *(arr + i) = calloc(1001, sizeof(char));
        if (*(arr + i) == NULL) {
            for (int j = 0; j < i; j++) {
                free(*(arr + j));
            }
            free(res);
            free(arr);
            printf("Failed to allocate memory");
            return 8;
        }
    }

    printf("Podaj liczbe tekstow do wprowadzenia:");
    if (!scanf("%d", &number_of_texts)) {
        for (int i = 0; i < 4; i++) {
            free(*(arr + i));
        }
        printf("Incorrect input");
        free(res);
        free(arr);
        return 1;
    }

    while (getchar() != '\n');

    if (number_of_texts < 2 || number_of_texts > 4) {
        for (int i = 0; i < 4; i++) {
            free(*(arr + i));
        }
        printf("Incorrect input data");
        free(res);
        free(arr);
        return 2;
    }

    printf("Podaj teksty:\n");
    for (int i = 0; i < number_of_texts; i++) {
        scanf("%1000[^\n]", *(arr + i));
        while (getchar() != '\n');
        buffer_size += (int) strlen(*(arr + i));
    }

    switch (number_of_texts) {
        case 1:
            concatenate(res, buffer_size + number_of_texts, number_of_texts, *(arr + 0));
            printf("%s", res);
            break;
        case 2:
            concatenate(res, buffer_size + number_of_texts, number_of_texts, *(arr + 0), *(arr + 1));
            printf("%s", res);
            break;
        case 3:
            concatenate(res, buffer_size + number_of_texts, number_of_texts, *(arr + 0), *(arr + 1), *(arr + 2));
            printf("%s", res);
            break;
        case 4:
            concatenate(res, buffer_size + number_of_texts, number_of_texts, *(arr + 0), *(arr + 1), *(arr + 2), *(arr + 3));
            printf("%s", res);
            break;
        default:
            break;
    }

    for (int i = 0; i < 4; i++) {
        free(*(arr + i));
    }
    free(res);
    free(arr);
    return 0;
}

int concatenate(char *res, int buffer_size, int number_of_texts, ...) {
    if (res == NULL || buffer_size <= 0 || number_of_texts <= 0) return 1;

    va_list args;
    va_start(args, number_of_texts);

    int i = 0, j = 0, k = 0, bytes = 0;

    for (i = 0; i < number_of_texts; i++) {
        char *tmp = va_arg(args, char *);
        bytes += (int) strlen(tmp);
    }

    bytes += number_of_texts - 1;

    if (bytes + 1 > buffer_size) {
        va_end(args);
        return 2;
    }

    va_start(args, number_of_texts);
    for (i = 0; i < number_of_texts; i++) {
        char *tmp = va_arg(args, char *);
        for (j = 0; j < (int) strlen(tmp); j++, k++) {
            *(res + k) = *(tmp + j);
        }
        if (i != number_of_texts - 1) *(res + k++) = ' ';
    }

    *(res + k) = '\0';

    va_end(args);

    return 0;
}

