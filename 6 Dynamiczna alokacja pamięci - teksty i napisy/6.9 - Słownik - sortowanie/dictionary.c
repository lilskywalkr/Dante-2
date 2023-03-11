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

int dictionary_sort_alphabetically(struct dictionary_t *d) {
    if (d == NULL || d -> size < 0 || d -> capacity <= 0 || d -> size > d -> capacity || d -> wc == NULL) return 1;

    for (int i = 0, idx = 0; i < d -> size - 1; i++) {
        for (int j = 0; j < d -> size - i - 1; j++) {
            if (((*(d->wc + j)->word) + idx) > ((*(d->wc + j + 1)->word) + idx)) {
                char *word = (d->wc + j)->word;
                int counter = (d->wc + j)->counter;

                (d->wc + j)->word = (d->wc + j + 1)->word;
                (d->wc + j)->counter = (d->wc + j + 1)->counter;

                (d->wc + j + 1)->word = word;
                (d->wc + j + 1)->counter = counter;
            }
        }
    }

    for (int i = 0; i < d -> size - 1; i++) {
        for (int j = 0; j < d -> size - i - 1; j++) {
            if (strcmp((d -> wc + j) -> word, (d -> wc + j + 1) -> word) > 0) {
                char *word = (d->wc + j)->word;
                int counter = (d->wc + j)->counter;

                (d->wc + j)->word = (d->wc + j + 1)->word;
                (d->wc + j)->counter = (d->wc + j + 1)->counter;

                (d->wc + j + 1)->word = word;
                (d->wc + j + 1)->counter = counter;
            }
        }
    }

    return 0;
}

int dictionary_sort_occurence(struct dictionary_t *d) {
    if (d == NULL || d -> size < 0 || d -> capacity <= 0 || d -> size > d -> capacity || d -> wc == NULL) return 1;

    for (int i = 0; i < d -> size - 1; i++) {
        for (int j = 0; j < d -> size - i - 1; j++) {
            if ((d -> wc + j) -> counter < (d -> wc + j + 1) -> counter) {
                char *word = (d->wc + j)->word;
                int counter = (d->wc + j)->counter;

                (d->wc + j)->word = (d->wc + j + 1)->word;
                (d->wc + j)->counter = (d->wc + j + 1)->counter;

                (d->wc + j + 1)->word = word;
                (d->wc + j + 1)->counter = counter;
            } else if ((d -> wc + j) -> counter == (d -> wc + j + 1) -> counter) {
                if (strcmp((d -> wc + j) -> word, (d -> wc + j + 1) -> word) > 0) {
                    char *word = (d->wc + j)->word;
                    int counter = (d->wc + j)->counter;

                    (d->wc + j)->word = (d->wc + j + 1)->word;
                    (d->wc + j)->counter = (d->wc + j + 1)->counter;

                    (d->wc + j + 1)->word = word;
                    (d->wc + j + 1)->counter = counter;
                }
            }
        }
    }

    return 0;
}

int save_dictionary_b(const struct dictionary_t *d, const char *filename) {
    if (d == NULL || d -> size < 0 || d -> capacity <= 0 || d -> size > d -> capacity || d -> wc == NULL || filename == NULL) return 1;

    FILE *f_p;

    f_p = fopen(filename, "wb");

    if (f_p == NULL) {
        return 2;
    }

    fwrite(&(d -> size), sizeof(int), 1, f_p);

    for (int i = 0; i < d -> size; i++) {
        int length = (int)strlen((d -> wc + i) -> word);
        char *word = (d -> wc + i) -> word;
        int counter = (d -> wc + i) -> counter;

        fwrite(&length, sizeof(int), 1, f_p);
        fwrite(word, sizeof(char), length, f_p);
        fwrite(&counter, sizeof(int), 1, f_p);
    }

    fclose(f_p);
    return 0;
}

struct dictionary_t* load_dictionary_b(const char *filename, int *err_code) {
    if (filename == NULL) {
        if (err_code != NULL) {
            *err_code = 1;
        }
        return NULL;
    }

    FILE *f_p;
    struct dictionary_t* d;
    int size = 0, length = 0, counter = 0, n = 0;

    f_p = fopen(filename, "rb");
    if (f_p == NULL) {
        if (err_code != NULL) {
            *err_code = 2;
        }
        return NULL;
    }

    fread(&size, sizeof(int), 1, f_p);

    if (ferror(f_p)) {
        if (err_code != NULL) {
            *err_code = 3;
        }
        fclose(f_p);
        return NULL;
    }

    if (size <= 0) {
        if (err_code != NULL) {
            *err_code = 3;
        }
        fclose(f_p);
        return NULL;
    }

    d = create_dictionary(size, &n);

    if (n == 1 || n == 2) {
        if (err_code != NULL) {
            *err_code = 4;
        }
        fclose(f_p);
        return NULL;
    }

    for (int i = 0; i < size; i++) {
        fread(&length, sizeof(int), 1, f_p);

        if (ferror(f_p) || length <= 0) {
            if (err_code != NULL) {
                *err_code = 3;
            }
            destroy_dictionary(&d);
            fclose(f_p);
            return NULL;
        }

        char *word = calloc(length+1, sizeof(char));

        if (word == NULL) {
            if (err_code != NULL) {
                *err_code = 4;
            }
            destroy_dictionary(&d);
            fclose(f_p);
            return NULL;
        }

        fread(word, sizeof(char), length, f_p);

        if (ferror(f_p) || (int) strlen(word) == 0) {
            if (err_code != NULL) {
                *err_code = 3;
            }
            destroy_dictionary(&d);
            free(word);
            fclose(f_p);
            return NULL;
        }

        n = dictionary_add_word(d, word);
        if (n == 1 || n == 2) {
            if (err_code != NULL) {
                *err_code = 4;
            }
            destroy_dictionary(&d);
            free(word);
            fclose(f_p);
            return NULL;
        }

        fread(&counter, sizeof(int), 1, f_p);

        if (ferror(f_p)) {
            if (err_code != NULL) {
                *err_code = 3;
            }
            destroy_dictionary(&d);
            fclose(f_p);
            free(word);
            return NULL;
        }

        (d -> wc + d -> size - 1) -> counter = counter;

        free(word);
        word = NULL;
    }

    if (err_code != NULL) {
        *err_code = 0;
    }

    fclose(f_p);
    return d;
}
