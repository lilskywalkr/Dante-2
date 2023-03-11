#include <stdio.h>
#include <stdlib.h>

struct matrix_t{
    int **ptr;
    int width;
    int height;
};

int matrix_create(struct matrix_t *m, int width, int height);
int matrix_read(struct matrix_t *m);
void matrix_display(const struct matrix_t *m);
void matrix_destroy(struct matrix_t *m);

int main() {
    struct matrix_t m;
    struct matrix_t *m_p = (struct matrix_t *)&m;
    int width = 0, height = 0, n = 0;

    printf("Podaj szerokosci wysokosc:");
    if (scanf("%d %d", &width, &height) != 2) {
        printf("incorrect input");
        return 1;
    }

    while(getchar() != '\n');

    if (width <= 0 || height <= 0) {
        printf("incorrect input data");
        return 2;
    }

    n = matrix_create(m_p, width, height);

    if (n == 2) {
        printf("Failed to allocate memory");
        return 8;
    }

    printf("Podaj wartosci:\n");
    n = matrix_read(m_p);
    if (n == 2) {
        printf("incorrect input");
        matrix_destroy(m_p);
        return 1;
    }

    matrix_display(m_p);
    matrix_destroy(m_p);
    return 0;
}

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

