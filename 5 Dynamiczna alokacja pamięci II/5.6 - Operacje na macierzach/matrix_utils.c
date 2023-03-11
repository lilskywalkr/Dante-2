#include <stdio.h>
#include <stdlib.h>

#include "matrix_utils.h"

int matrix_create(struct matrix_t *m, int width, int height) {
    if (m == NULL || width <= 0 || height <= 0) return 1;

    m -> ptr = calloc(height, sizeof(int *));

    if (m -> ptr == NULL) return 2;

    for (int i = 0; i < height; i++) {
        *(m -> ptr + i) = calloc(width, sizeof(int));

        if (*(m -> ptr + i) == NULL) {
            for (int j = 0; j < i; j++) {
                free(*(m -> ptr + j));
            }
            free(m -> ptr);
            return 2;
        }
    }

    m -> width = width;
    m -> height = height;

    return 0;
}


struct matrix_t* matrix_create_struct(int width, int height) {
    if (width <= 0 || height <= 0) return NULL;

    struct matrix_t *m = calloc(1, sizeof(struct matrix_t));
    if (m == NULL) return NULL;

    if (matrix_create(m, width, height)) {
        free(m);
        m = NULL;
        return NULL;
    }

    return m;
}

void matrix_destroy(struct matrix_t *m) {
    if (m != NULL && m -> ptr != NULL && m -> width > 0 && m -> height > 0) {
        for (int i = 0; i < m -> height; i++) {
            if (*(m -> ptr + i) != NULL) {
                free(*(m -> ptr + i));
            }
        }
        free(m -> ptr);
        m -> ptr = NULL;
    }
}

void matrix_destroy_struct(struct matrix_t **m) {
    if (m != NULL) {
        matrix_destroy(*m);
        free(*m);
        *m = NULL;
    }
}

struct matrix_t* matrix_transpose(const struct matrix_t *m) {
    if (m == NULL || m -> ptr == NULL || m -> width <= 0 || m -> height <= 0) return NULL;

    int width = m -> height;
    int height = m -> width;

    struct matrix_t* new_m = calloc(1, sizeof(struct matrix_t));

    if (new_m == NULL) return NULL;

    if (matrix_create(new_m, width, height)) {
        free(new_m);
        return NULL;
    }

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            *(*(new_m -> ptr + i) + j) = *(*(m -> ptr + j) + i);
        }
    }

    return new_m;
}

void matrix_display(const struct matrix_t *m) {
    if (m != NULL && m -> ptr != NULL && m -> width > 0 && m -> height > 0) {
        for (int i = 0; i < m -> height; i++) {
            for (int j = 0; j < m -> width; j++) {
                printf("%d ", *(*(m -> ptr + i) + j));
            }
            printf("\n");
        }
    }
}

int matrix_save_b(const struct matrix_t *m, const char *filename) {
    if (m == NULL || m -> ptr == NULL || m -> width <= 0 || m -> height <= 0 || filename == NULL) return 1;

    FILE *f_p;
    f_p = fopen(filename, "wb");

    if (f_p == NULL) return 2;

    fwrite(&(m -> width), sizeof(int), 1, f_p);
    fwrite(&(m -> height), sizeof(int), 1, f_p);

    for (int i = 0; i < m -> height; i++) {
        for (int  j = 0; j < m -> width; j++) {
            fwrite((*(m -> ptr + i) + j), sizeof(int), 1, f_p);

            if (ferror(f_p)) {
                fclose(f_p);
                return 3;
            }
        }
    }

    fclose(f_p);
    return 0;
}

int matrix_save_t(const struct matrix_t *m, const char *filename) {
    if (m == NULL || m -> ptr == NULL || m -> width <= 0 || m -> height <= 0 || filename == NULL) return 1;

    FILE *f_p;
    f_p = fopen(filename, "w");

    if (f_p == NULL) return 2;

    fprintf(f_p, "%d %d\n", m -> width, m -> height);

    for (int i = 0; i < m -> height; i++) {
        for (int j = 0; j < m -> width; j++) {
            fprintf(f_p, "%d ", *(*(m -> ptr + i) + j));
            if (ferror(f_p)) {
                fclose(f_p);
                return 3;
            }
        }
        fprintf(f_p, "\n");
    }

    fclose(f_p);
    return 0;
}

int matrix_read(struct matrix_t *m) {
    if (m == NULL || m -> ptr == NULL || m -> width <= 0 || m -> height <= 0) return 1;

    int a = 0;

    for (int i = 0; i < m -> height; i++) {
        for (int j = 0; j < m -> width; j++) {
            if (!scanf("%d", &a)) return 2;
            *(*(m -> ptr + i) + j) = a;
        }
    }

    return 0;
}

struct matrix_t* matrix_copy(struct matrix_t *m) {
    if (m == NULL || m -> ptr == NULL || m -> width <= 0 || m -> height <= 0) return NULL;

    struct matrix_t *new_m = matrix_create_struct(m -> width, m -> height);

    if (new_m == NULL) return NULL;

    for (int i = 0; i < new_m -> height; i++) {
        for (int j = 0; j < new_m -> width; j++) {
            *(*(new_m -> ptr + i) + j) = *(*(m -> ptr + i) + j);
        }
    }

    return new_m;
}

struct matrix_t* matrix_add(const struct matrix_t *m1, const struct matrix_t *m2) {
    if (m1 == NULL || m1 -> ptr == NULL || m1 -> width <= 0 || m1 -> height <= 0 ||
        m2 == NULL || m2 -> ptr == NULL || m2 -> width <= 0 || m2 -> height <= 0 ||
        m1 -> width != m2 -> width || m1 -> height != m2 -> height) return NULL;

    struct matrix_t* new_m = matrix_create_struct(m1 -> width, m2 -> height);
    if (new_m == NULL) return NULL;

    for (int i = 0; i < new_m -> height; i++) {
        for (int j = 0; j < new_m -> width; j++) {
            *(*(new_m -> ptr + i) + j) = *(*(m1 -> ptr + i) + j) + *(*(m2 -> ptr + i) + j);
        }
    }

    return new_m;
}

struct matrix_t* matrix_subtract(const struct matrix_t *m1, const struct matrix_t *m2) {
    if (m1 == NULL || m1 -> ptr == NULL || m1 -> width <= 0 || m1 -> height <= 0 ||
        m2 == NULL || m2 -> ptr == NULL || m2 -> width <= 0 || m2 -> height <= 0 ||
        m1 -> width != m2 -> width || m1 -> height != m2 -> height) return NULL;

    struct matrix_t* new_m = matrix_create_struct(m1 -> width, m2 -> height);
    if (new_m == NULL) return NULL;

    for (int i = 0; i < new_m -> height; i++) {
        for (int j = 0; j < new_m -> width; j++) {
            *(*(new_m -> ptr + i) + j) = *(*(m1 -> ptr + i) + j) - *(*(m2 -> ptr + i) + j);
        }
    }

    return new_m;
}

struct matrix_t* matrix_multiply(const struct matrix_t *m1, const struct matrix_t *m2) {
    if (m1 == NULL || m1 -> ptr == NULL || m1 -> width <= 0 || m1 -> height <= 0 ||
        m2 == NULL || m2 -> ptr == NULL || m2 -> width <= 0 || m2 -> height <= 0 ||
        m1 -> width != m2 -> height) return NULL;

    struct matrix_t* new_m = matrix_create_struct(m2 -> width, m1 -> height);
    int sum = 0, a = 0, b = 0;
    if (new_m == NULL) return NULL;

    for (int i = 0; i < new_m -> height; i++) {
        for (int j = 0; j < new_m -> width; j++) {
            for (int k = 0; k < m1 -> width; k++) {
                a = *(*(m1 -> ptr + i) + k);
                b = *(*(m2 -> ptr + k) + j);
                sum += a * b;
            }
            *(*(new_m -> ptr + i) + j) = sum;
            sum = 0;
            a = 0;
            b = 0;
        }
    }

    return new_m;
}

struct matrix_t* matrix_load_b(const char *filename, int *err_code) {
    if (filename == NULL) {
        if (err_code != NULL) *err_code = 1;
        return NULL;
    }

    FILE *f_p = fopen(filename, "rb");
    int a = 0, len = 0, width = 0, height = 0;

    if (f_p == NULL) {
        if (err_code != NULL) *err_code = 2;
        return NULL;
    }

    fread(&width, 1, sizeof(int), f_p);
    if (ferror(f_p)) {
        if (err_code != NULL) *err_code = 3;
        fclose(f_p);
        return NULL;
    }

    if (width <= 0) {
        if (err_code != NULL) *err_code = 3;
        fclose(f_p);
        return NULL;
    }

    fread(&height, 1, sizeof(int), f_p);
    if (ferror(f_p)) {
        if (err_code != NULL) *err_code = 3;
        fclose(f_p);
        return NULL;
    }

    if (height <= 0) {
        if (err_code != NULL) *err_code = 3;
        fclose(f_p);
        return NULL;
    }

    struct matrix_t* new_m = matrix_create_struct(width, height);

    if (new_m == NULL) {
        if (err_code != NULL) *err_code = 4;
        fclose(f_p);
        return NULL;
    }

    for (int i = 0; i < height && !feof(f_p); i++) {
        for (int j = 0; j < width && !feof(f_p); j++) {
            fread(&a, sizeof(int), 1, f_p);
            *(*(new_m -> ptr + i) + j) = a;
            len++;
        }
    }

    if (len != width * height) {
        if (err_code != NULL) *err_code = 3;
        fclose(f_p);
        matrix_destroy_struct(&new_m);
        return NULL;
    }

    if (err_code != NULL) *err_code = 0;
    fclose(f_p);
    return new_m;
}

struct matrix_t* matrix_load_t(const char *filename, int *err_code) {
    if (filename == NULL) {
        if (err_code != NULL) *err_code = 1;
        return NULL;
    }

    FILE *f_p = fopen(filename, "rb");
    int width = 0, height = 0, a = 0, len = 0;
    if (f_p == NULL) {
        if (err_code != NULL) *err_code = 2;
        return NULL;
    }

    if (fscanf(f_p, "%d %d", &width, &height) != 2) {
        if (err_code != NULL) *err_code = 3;
        fclose(f_p);
        return NULL;
    }

    if (width <= 0 || height <= 0) {
        if (err_code != NULL) *err_code = 3;
        fclose(f_p);
        return NULL;
    }

    struct matrix_t* new_m = matrix_create_struct(width, height);

    if (new_m == NULL) {
        if (err_code != NULL) *err_code = 4;
        fclose(f_p);
        return NULL;
    }

    for (int i = 0; i < height && !feof(f_p); i++) {
        for (int j = 0; j < width && !feof(f_p); j++) {
            if (fscanf(f_p, "%d", &a)) {
                *(*(new_m -> ptr + i) + j) = a;
                len++;
            }
        }
    }

    if (len != width * height) {
        if (err_code != NULL) *err_code = 3;
        fclose(f_p);
        matrix_destroy_struct(&new_m);
        return NULL;
    }

    if (err_code != NULL) *err_code = 0;
    fclose(f_p);
    return new_m;
}

