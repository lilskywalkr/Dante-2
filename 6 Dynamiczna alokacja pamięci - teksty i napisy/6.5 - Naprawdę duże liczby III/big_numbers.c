#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "big_numbers.h"

int create(struct big_numbers_t *bn, int capacity) {
    if (bn == NULL || capacity <= 0) return 1;

    bn -> big_number = calloc(capacity, sizeof(char *));

    if (bn -> big_number == NULL) {
        return 2;
    }

    bn -> capacity = capacity;
    bn -> size = 0;

    return 0;
}

int create_big_numbers(struct big_numbers_t **bn, int capacity) {
    if (bn == NULL || capacity <= 0) return 1;

    *bn = calloc(1, sizeof(struct big_numbers_t));

    if (*bn == NULL) {
        return 2;
    }

    int n = create(*bn, capacity);

    if (n == 2) {
        free((*bn));
        (*bn) = NULL;
        return 2;
    }

    return 0;
}

void destroy(struct big_numbers_t *bn) {
    if (bn != NULL && bn -> size >= 0 && bn -> capacity > 0 && bn -> size <= bn -> capacity && bn -> big_number != NULL) {
        for (int i = 0; i < (bn) -> size; i++) {
            free(*((bn) -> big_number + i));
        }
        free((bn)->big_number);
    }
}

void destroy_big_numbers(struct big_numbers_t **bn) {
    if (bn != NULL && (*bn) != NULL && (*bn) -> size >= 0 && (*bn) -> capacity > 0 && (*bn) -> size <= (*bn) -> capacity && (*bn) -> big_number != NULL) {
        destroy(*bn);
        free(*bn);
        *bn = NULL;
    }
}

int all_digits(const char *str) {
    if (str == NULL) return 1;

    int i = 0;
    if (*(str + i) != '-' && (*(str + i) <= '0' || *(str + i) > '9')) return 2;

    for (i = 1; i < (int)strlen(str); i++) {
        if (*(str + i) < '0' || *(str + i) > '9') return 2;
    }

    return 0;
}

int add_big_number(struct big_numbers_t *bn, const char *big_number) {
    if (bn == NULL || big_number == NULL || bn -> size < 0 || bn -> capacity <= 0 || bn -> size > bn -> capacity || bn -> big_number == NULL) return 1;

    if (all_digits(big_number) == 2) return 1;

    if (bn -> size == bn -> capacity) return 3;

    char *a = strdup(big_number);
    if (a == NULL) {
        return 2;
    }

    *(bn -> big_number + bn -> size) = a;
    bn -> size += 1;

    return 0;
}

void display(const struct big_numbers_t *bn) {
    if (bn != NULL && bn -> size >= 0 && bn -> capacity > 0 && bn -> size <= bn -> capacity && bn -> big_number != NULL) {
        for (int i = 0; i < bn -> size; i++) {
            for (int j = 0; j < (int) strlen(*(bn -> big_number + i)); j++) {
                printf("%c", *(*(bn -> big_number + i) + j));
            }
            printf("\n");
        }
    }
}

