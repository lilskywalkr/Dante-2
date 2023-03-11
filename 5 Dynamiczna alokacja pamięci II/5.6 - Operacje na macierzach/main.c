#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "matrix_utils.h"

int main() {
    char *filename = calloc(20, sizeof(char));

    if (filename == NULL) {
        printf("Failed to allocate memory");
        return 8;
    }

    printf("Podaj nazwę pierwszego pliku:");
    scanf("%19[^\n]", filename);

    while (getchar() != '\n');
    int l = (int)strlen(filename);

    struct matrix_t *m1;
    if (l >= 5 && *(filename + (l - 1)) == 'n' && *(filename + (l - 2)) == 'i' && *(filename + (l - 3)) == 'b' && *(filename + (l - 4)) == '.') {
        m1 = matrix_load_b(filename, &l);
    } else if (l >= 5 && *(filename + (l - 1)) == 't' && *(filename + (l - 2)) == 'x' && *(filename + (l - 3)) == 't' && *(filename + (l - 4)) == '.') {
        m1 = matrix_load_t(filename, &l);
    } else {
        printf("Unsupported file format");
        free(filename);
        return 7;
    }

    if (l == 2) {
        printf("Couldn't open file");
        free(filename);
        return 4;
    } else if (l == 3) {
        printf("File corrupted");
        free(filename);
        return 6;
    } else if (l == 4) {
        printf("Failed to allocate memory");
        free(filename);
        return 8;
    }

    printf("Podaj nazwę drugiego pliku:");
    scanf("%19[^\n]", filename);

    while (getchar() != '\n');
    l = (int)strlen(filename);

    struct matrix_t *m2;
    if (l >= 5 && *(filename + (l - 1)) == 'n' && *(filename + (l - 2)) == 'i' && *(filename + (l - 3)) == 'b' && *(filename + (l - 4)) == '.') {
        m2 = matrix_load_b(filename, &l);
    } else if (l >= 5 && *(filename + (l - 1)) == 't' && *(filename + (l - 2)) == 'x' && *(filename + (l - 3)) == 't' && *(filename + (l - 4)) == '.') {
        m2 = matrix_load_t(filename, &l);
    } else {
        printf("Unsupported file format");
        matrix_destroy_struct(&m1);
        free(filename);
        return 7;
    }

    free(filename);
    filename = NULL;

    if (l == 2) {
        printf("Couldn't open file");
        matrix_destroy_struct(&m1);
        return 4;
    } else if (l == 3) {
        printf("File corrupted");
        matrix_destroy_struct(&m1);
        return 6;
    } else if (l == 4) {
        printf("Failed to allocate memory");
        matrix_destroy_struct(&m1);
        return 8;
    }

    struct matrix_t *result_matrix = matrix_add(m1, m2);
    if (result_matrix == NULL) {
        printf("Error\n");
    } else {
        matrix_display(result_matrix);
        matrix_destroy_struct(&result_matrix);
    }

    result_matrix = matrix_subtract(m1, m2);
    if (result_matrix == NULL) {
        printf("Error\n");
    } else {
        matrix_display(result_matrix);
        matrix_destroy_struct(&result_matrix);
    }

    result_matrix = matrix_multiply(m1, m2);
    if (result_matrix == NULL) {
        printf("Error\n");
    } else {
        matrix_display(result_matrix);
        matrix_destroy_struct(&result_matrix);
    }

    matrix_destroy_struct(&m1);
    matrix_destroy_struct(&m2);

    return 0;
}

