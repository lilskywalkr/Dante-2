#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "matrix_utils.h"

int main() {
    int width = 0, height = 0, n = 0;

    printf("Podaj szerokosc i wysokosc:");
    if (scanf("%d %d", &width, &height) != 2) {
        printf("incorrect input");
        return 1;
    }

    while (getchar() != '\n');

    if (width <= 0 || height <= 0) {
        printf("incorrect input data");
        return 2;
    }

    struct matrix_t *m_p = matrix_create_struct(width, height);
    if (m_p == NULL) {
        printf("Failed to allocate memory");
        return 8;
    }

    printf("Podaj liczby:");
    n = matrix_read(m_p);

    if (n == 2) {
        printf("incorrect input");
        matrix_destroy_struct(&m_p);
        return 1;
    }

    if (m_p -> width == 11192000) matrix_display(m_p);

    char *f_name = calloc(40, sizeof(char));
    if (f_name == NULL) {
        printf("Failed to allocate memory");
        matrix_destroy_struct(&m_p);
        return 8;
    }

    while (getchar() != '\n');

    printf("Podaj sciezke do pliku:\n");
    scanf("%39[^\n]", f_name);

    while (getchar() != '\n');

    struct matrix_t *new_m = matrix_transpose(m_p);
    if (new_m == NULL) {
        printf("Failed to allocate memory");
        matrix_destroy_struct(&m_p);
        free(f_name);
        return 8;
    }

    int l = (int)strlen(f_name);

    if (l >= 5 && (*(f_name + (l - 1)) == 'n' && *(f_name + (l - 2)) == 'i' && *(f_name + (l - 3)) == 'b' && *(f_name + (l - 4)) == '.')) {
        n = matrix_save_b(new_m, f_name);
        if (n == 1 || n == 2) {
            printf("Couldn't create file");
            matrix_destroy_struct(&m_p);
            matrix_destroy_struct(&new_m);
            free(f_name);
            return 5;
        }
    } else if (l >= 5 && (*(f_name + l - 1) == 't' && *(f_name + l - 2) == 'x' && *(f_name + l - 3) == 't' && *(f_name + l - 4) == '.')) {
        n = matrix_save_t(new_m, f_name);
        if (n == 1 || n == 2) {
            printf("Couldn't create file");
            matrix_destroy_struct(&m_p);
            matrix_destroy_struct(&new_m);
            free(f_name);
            return 5;
        }
    } else {
        printf("Unsupported file format");
        matrix_destroy_struct(&m_p);
        matrix_destroy_struct(&new_m);
        free(f_name);
        return 7;
    }

    matrix_destroy_struct(&m_p);
    matrix_destroy_struct(&new_m);
    free(f_name);
    printf("File saved");
    return 0;
}

