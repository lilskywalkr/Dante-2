#include <stdio.h>
#include <stdlib.h>

#include "circular_buffer.h"

int circular_buffer_create(struct circular_buffer_t *a, int N) {
    if (a == NULL || N <= 0) return 1;

    a -> ptr  = calloc(N, sizeof(int));

    if (a -> ptr == NULL) return 2;
    a -> capacity = N;
    a -> begin = 0;
    a -> end = 0;
    a -> full = 0;

    return 0;
}

int circular_buffer_create_struct(struct circular_buffer_t **cb, int N) {
    if (cb == NULL || N <= 0) return 1;

    int n = 0;

    *cb = calloc(1, sizeof(struct circular_buffer_t));
    if (*cb == NULL) return 2;

    if ((n = circular_buffer_create(*cb, N))) {
        free(*cb);
        return n;
    }

    return 0;
}

void circular_buffer_destroy(struct circular_buffer_t *a) {
    if(a != NULL && a -> ptr != NULL) {
        free(a -> ptr);
    }
}

void circular_buffer_destroy_struct(struct circular_buffer_t **a) {
    if (a != NULL && *a != NULL) {
        circular_buffer_destroy(*a);
        free(*a);
    }
}

int circular_buffer_push_back(struct circular_buffer_t *cb, int value) {
    if (cb == NULL || cb -> ptr == NULL || cb -> capacity < 0 || cb -> end < 0 || cb -> begin < 0
    || cb -> end >= cb -> capacity || cb -> begin >= cb -> capacity || (cb -> full != 0 && cb -> full != 1)) return 1;

    if (!(cb -> full)) {
        *(cb -> ptr + cb -> end) = value;

        if (cb -> end + 1 == cb -> capacity) cb -> end = 0;
        else cb -> end += 1;

        if (cb -> begin == cb -> end) cb -> full = 1;
    } else {
        if (cb -> begin + 1 == cb -> capacity) {
            *(cb -> ptr + cb -> begin) = value;
            cb -> begin = 0;
            cb -> end = cb -> begin;
        } else {
            *(cb -> ptr + cb -> begin) = value;
            cb -> begin += 1;
            cb -> end = cb -> begin;
        }
    }

    return 0;
}

int circular_buffer_pop_front(struct circular_buffer_t *a, int *err_code) {
    if (a == NULL || a -> ptr == NULL || a -> capacity < 0 || a -> end < 0 || a -> begin < 0
    || a -> end >= a -> capacity || a -> begin >= a -> capacity || (a -> full != 0 && a -> full != 1)) {
        if (err_code != NULL) *err_code = 1;
        return 19112000;
    }

    if (circular_buffer_empty(a)) {
        if (err_code != NULL) *err_code = 2;
    } else {
        if (err_code != NULL) *err_code = 0;
    }

    int pop = *(a -> ptr + a -> begin);

    if (a -> begin + 1 != a -> capacity) a -> begin += 1;
    else a -> begin = 0;

    if (a -> full) a -> full = 0;

    return pop;
}

int circular_buffer_pop_back(struct circular_buffer_t *a, int *err_code) {
    if (a == NULL || a -> ptr == NULL || a -> capacity < 0 || a -> end < 0 || a -> begin < 0
    || a -> end >= a -> capacity || a -> begin >= a -> capacity || (a -> full != 0 && a -> full != 1)) {
        if (err_code != NULL) *err_code = 1;
        return 19112000;
    }

    if (circular_buffer_empty(a)) {
        if (err_code != NULL) *err_code = 2;
    } else {
        if (err_code != NULL) *err_code = 0;
    }

    int pop = 0;
    if (a -> end == 0) pop = *(a -> ptr + a -> capacity - 1);
    else pop = *(a -> ptr + a -> end - 1);

    if (a -> end) a -> end -= 1;
    else a -> end = a -> capacity - 1;

    if (a -> full) a -> full = 0;

    return pop;
}

int circular_buffer_empty(const struct circular_buffer_t *a) {
    if (a == NULL || a -> ptr == NULL || a -> capacity < 0 || a -> end < 0 || a -> begin < 0
    || a -> end >= a -> capacity || a -> begin >= a -> capacity || (a -> full != 0 && a -> full != 1)) return -1;

    if (!(a -> full) && a -> begin == a -> end) return 1;

    return 0;
}

int circular_buffer_full(const struct circular_buffer_t *a) {
    if (a == NULL || a -> ptr == NULL || a -> capacity < 0 || a -> end < 0 || a -> begin < 0
    || a -> end >= a -> capacity || a -> begin >= a -> capacity || (a -> full != 0 && a -> full != 1)) return -1;

    if (a -> full && a -> begin == a -> end) return 1;

    return 0;
}

void circular_buffer_display(const struct circular_buffer_t *a) {
    if (a != NULL && a -> ptr != NULL && a -> capacity > 0 && a -> end >= 0 && a -> begin >= 0
    && a -> end < a -> capacity && a -> begin < a -> capacity && (a -> full == 0 || a -> full == 1)) {
        if ((a -> begin == a -> end && a -> full) || a -> begin > a -> end) {
            for (int i = a -> begin; i < a -> capacity; i++) {
                printf("%d ", *(a -> ptr + i));
            }

            for (int i = 0; i < a -> end; i++) {
                printf("%d ", *(a -> ptr + i));
            }
            printf("\n");
        } else if (a -> begin < a -> end) {
            for (int i = a -> begin; i < a -> end; i++) {
                printf("%d ", *(a -> ptr + i));
            }
            printf("\n");
        }
    }
}
