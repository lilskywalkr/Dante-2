#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

char* concatenate(int number_of_texts, ...);

int main() {
    int number_of_text = 0;
    char **arr, *txt;

    arr = calloc(4, sizeof(char *));

    if (arr == NULL) {
        printf("Failed to allocate memory");
        return 8;
    }

    for (int i = 0; i < 4; i++) {
        *(arr + i) = calloc(1001, sizeof(char));
        if (*(arr + i) == NULL) {
            for (int j = 0; j < i; j++) {
                free(*(arr + j));
            }
            free(arr);
            printf("Failed to allocate memory");
            return 8;
        }
    }

    printf("Podaj liczbe tekstow do wprowadzenia:");
    if (!scanf("%d", &number_of_text)) {
        for (int i = 0; i < 4; i++) {
            free(*(arr + i));
        }
        free(arr);
        printf("Incorrect input");
        return 1;
    }

    while (getchar() != '\n');

    if (number_of_text < 2 || number_of_text > 4) {
        for (int i = 0; i < 4; i++) {
            free(*(arr + i));
        }
        free(arr);
        printf("Incorrect input data");
        return 2;
    }

    printf("Podaj teksty:\n");

    for (int i = 0; i < number_of_text; i++) {
        scanf("%1000[^\n]", *(arr + i));
        while (getchar() != '\n');
    }

    switch (number_of_text) {
        case 1:
            txt = concatenate(number_of_text, *(arr + 0));
            if (txt == NULL) {
                for (int i = 0; i < 4; i++) {
                    free(*(arr + i));
                }
                free(arr);
                printf("Failed to allocate memory");
                return 8;
            }
            break;
        case 2:
            txt = concatenate(number_of_text, *(arr + 0), *(arr + 1));
            if (txt == NULL) {
                for (int i = 0; i < 4; i++) {
                    free(*(arr + i));
                }
                free(arr);
                printf("Failed to allocate memory");
                return 8;
            }
            break;
        case 3:
            txt = concatenate(number_of_text, *(arr + 0), *(arr + 1), *(arr + 2));
            if (txt == NULL) {
                for (int i = 0; i < 4; i++) {
                    free(*(arr + i));
                }
                free(arr);
                printf("Failed to allocate memory");
                return 8;
            }
            break;
        case 4:
            txt = concatenate(number_of_text, *(arr + 0), *(arr + 1), *(arr + 2), *(arr + 3));
            if (txt == NULL) {
                for (int i = 0; i < 4; i++) {
                    free(*(arr + i));
                }
                free(arr);
                printf("Failed to allocate memory");
                return 8;
            }
            break;
        default:
            break;
    }

    printf("%s", txt);

    for (int i = 0; i < 4; i++) {
        free(*(arr + i));
    }

    free(arr);
    free(txt);

    return 0;
}

char* concatenate (int number_of_texts, ...) {
    if (number_of_texts <= 0) return NULL;

    va_list args;
    va_start(args, number_of_texts);

    int bytes = 0, k = 0;

    for (int i = 0; i < number_of_texts; i++) {
        char *tmp = va_arg(args, char *);
        bytes += (i != number_of_texts - 1 ? (int) strlen(tmp) + 1: (int) strlen(tmp));
    }

    char *txt = calloc(bytes + 1, sizeof(char));
    if (txt == NULL) {
        va_end(args);
        return NULL;
    }

    va_start(args, number_of_texts);
    for (int i = 0; i < number_of_texts; i++) {
        char *tmp = va_arg(args, char *);
        for (int j = 0; j < (int) strlen(tmp); j++, k++) {
            *(txt + k) = *(tmp + j);
        }
        if (i != number_of_texts - 1) *(txt + k++) = ' ';
    }

    *(txt + k) = '\0';
    va_end(args);

    return txt;
}

