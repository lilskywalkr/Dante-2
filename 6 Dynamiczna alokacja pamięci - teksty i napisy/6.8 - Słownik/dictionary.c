//
// Created by ronnie on 31.03.2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "dictionary.h"

struct dictionary_t* create_dictionary(int N, int *err_code) {
    if (N <= 0) {
        if (err_code != NULL) {
            *err_code = 1;
        }
        return NULL;
    }

    struct dictionary_t *d = calloc(1, sizeof(struct dictionary_t));

    if (d == NULL) {
        if (err_code != NULL) {
            *err_code = 2;
        }
        return NULL;
    }

    d -> size = 0;
    d -> capacity = N;
    d -> wc = calloc(N, sizeof(struct word_count_t));

    if (d -> wc == NULL) {
        if (err_code != NULL) {
            *err_code = 2;
        }
        free(d);
        d = NULL;
        return NULL;
    }

    if (err_code != NULL) {
        *err_code = 0;
    }

    return d;
}

void destroy_dictionary(struct dictionary_t** d) {
    if (d != NULL && *d != NULL && (*d) -> size >= 0 && (*d) -> capacity > 0 && (*d) -> size <= (*d) -> capacity && (*d) -> wc != NULL) {
        for (int i = 0; i < (*d) -> size; i++) {
            if (((*d) -> wc + i) -> word != NULL) free(((*d) -> wc + i) -> word);
        }
        free((*d) -> wc);
        free(*d);
        *d = NULL;
    }
}

int dictionary_add_word(struct dictionary_t *d, const char *word) {
    if (d == NULL || d -> size < 0 || d -> capacity <= 0 || d -> size > d -> capacity || d -> wc == NULL || word == NULL) return 1;

    struct word_count_t* wrd = dictionary_find_word(d, word);

    if (wrd) {
        wrd -> counter += 1;
        return 0;
    }

    if (d -> size == d -> capacity) {
        struct word_count_t *tmp = realloc(d -> wc, sizeof(struct word_count_t) * d -> capacity * 2);

        if (tmp == NULL) {
            return 2;
        }

        d -> wc = tmp;
        d -> capacity *= 2;
    }

    char *a = strdup(word);

    if (a == NULL) {
        return 2;
    }

    (d -> wc + d -> size) -> word = a;

    (d->wc + d->size)->counter = 1;
    d -> size += 1;

    return 0;
}

struct word_count_t* dictionary_find_word(const struct dictionary_t *d, const char *word) {
    if (d == NULL || d -> size < 0 || d -> capacity <= 0 || d -> size > d -> capacity || d -> wc == NULL || word == NULL) return NULL;

    for (int i = 0; i < d -> size; i++) {
        if ((d -> wc + i) -> word == NULL) {
            return NULL;
        }
        if (strcmp(word, (d -> wc + i) -> word) == 0) {
            return (struct word_count_t* )(d -> wc + i);
        }
    }

    return NULL;
}

void dictionary_display(const struct dictionary_t *d) {
    if (d != NULL && d -> size >= 0 && d -> capacity > 0 && d -> size <= d -> capacity && d -> wc != NULL) {
        for (int i = 0; i < d -> size; i++) {
            printf("%s %d", (d -> wc + i) -> word, (d -> wc + i) -> counter);
            printf("\n");
        }
    }
}

