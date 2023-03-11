#include <stdio.h>
#include <stdlib.h>
#include "vector.h"

int vector_create(struct vector_t *a, int N) {
    if (a == NULL || N <= 0) return 1;

    a -> ptr = calloc(N, sizeof(int));

    if (a -> ptr == NULL) return 2;

    a -> capacity = N;
    a -> size = 0;

    return 0;
}

void vector_destroy(struct vector_t *a) {
    if (a != NULL && a -> ptr != NULL) {
        free(a -> ptr);
    }
}

int vector_create_struct(struct vector_t **a, int N) {
    if (a == NULL || N <= 0) return 1;

    int n = 0;

    *a = calloc(1, sizeof(struct vector_t));
    if (*a == NULL) return 2;

    if ((n = vector_create(*a, N))) {
        free(*a);
        return n;
    }

    return 0;
}

void vector_destroy_struct(struct vector_t **a) {
    if (a != NULL && *a != NULL) {
        vector_destroy(*a);
        free(*a);
    }
}

void vector_display(const struct vector_t *a) {
    if (a != NULL && a -> ptr != NULL && a -> capacity > 0 && a -> size > 0 && a -> size <= a -> capacity) {
        for (int i = 0; i < a -> size; i++) {
            printf("%d ", *(a -> ptr + i));
        }
        printf("\n");
    }
}

int vector_push_back(struct vector_t *a, int value) {
    if (a == NULL || a -> ptr == NULL || a -> size > a -> capacity || a -> size < 0 || a -> capacity <= 0) return 1;

    int *tmp = realloc(a->ptr, (a -> size + 1) * sizeof(int));
    if (tmp == NULL) return 2;

    a -> ptr = tmp;

    if (a -> size == a -> capacity) {
        a -> capacity *= 2;
    }

    *(a -> ptr + a -> size) = value;
    a -> size += 1;

    return 0;
}

int vector_erase(struct vector_t *a, int value) {
    if (a == NULL || a -> ptr == NULL || a -> size > a -> capacity || a -> size < 0 || a -> capacity <= 0) return -1;

    int num = 0, flag = 1;

    while(flag) {
        for (int i = 0; i < a -> size; i++) {
            if (*(a -> ptr + i) == value) {
                if (i != a -> size - 1) {
                    for (int j = i; j < a -> size - 1; j++) {
                        *(a -> ptr + j) = *(a -> ptr + j + 1);
                    }
                }
                num++;
                a -> size -= 1;
            }
        }
        flag = 0;

        for (int i = 0; i < a -> size; i++) {
            if (*(a -> ptr + i) == value) flag = 1;
        }
    }

    if (a -> capacity > 1) {
        if ((float)a -> size < (float)a -> capacity * 0.25) {
            int *tmp = realloc(a -> ptr, ((a -> capacity) / 2) * sizeof(int));
            if (tmp == NULL) return num;

            a -> capacity /= 2;
            a -> ptr = tmp;
        }
    }

    return num;
}

