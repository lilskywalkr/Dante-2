//
// Created by ronnie on 31.03.2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "stack.h"

int stack_push(struct stack_t **stack, char *value) {
    if (stack == NULL || value == NULL) return 1;

    struct stack_t *tmp = calloc(1, sizeof(struct stack_t));
    if (tmp == NULL) {
        return 2;
    }

    tmp -> sentence = value;
    tmp -> prev = *stack;
    *stack = tmp;

    return 0;
}

char *stack_pop(struct stack_t **stack, int *err_code) {
    if (stack == NULL) {
        if (err_code != NULL) {
            *err_code = 1;
        }
        return NULL;
    }

    char *txt = NULL;

    if ((*stack) != NULL) {
        txt = (*stack) -> sentence;
        struct stack_t *tmp = (*stack);
        (*stack) = tmp -> prev;

        free(tmp);

        if (err_code != NULL) {
            *err_code = 0;
        }
    } else {
        if (err_code != NULL) {
            *err_code = 1;
        }
    }

    return txt;
}

void recursive_destroy(struct stack_t *stack) {
    if (stack != NULL && stack -> prev != NULL) {
        struct stack_t *tmp = stack -> prev;
        recursive_destroy(stack -> prev);
        free(tmp -> sentence);
        free(tmp);
    }
}

void stack_destroy(struct stack_t **stack) {
    if (stack != NULL && (*stack) != NULL) {
        recursive_destroy((*stack));
        free((*stack) -> sentence);
        free((*stack));
    }
}

int stack_load(struct stack_t **stack, const char *filename) {
    if (stack == NULL || (*stack) != NULL || filename == NULL) return 1;

    FILE *f_p = fopen(filename, "r");
    if (f_p == NULL) {
        return 2;
    }

    char ch = 0;
    int n = 0, length = 0, init = 0;

    while (!feof(f_p)) {
        init = (int) ftell(f_p);
        for (length = 0; (ch = (char) fgetc(f_p)) != '.' && ch != EOF; length += 1);

        if (ch == '.') {
            fseek(f_p, init, SEEK_SET);
            char *sentence = calloc(length + 2, sizeof(char));

            if (sentence == NULL) {
                fclose(f_p);
                stack_destroy(stack);
                return 3;
            }

            for (length = 0; (ch = (char) fgetc(f_p)) != '.'; length += 1) *(sentence + length) = ch;

            *(sentence + length) = '.';
            *(sentence + length + 1) = '\0';

            n = stack_push(stack, sentence);

            if (n == 2) {
                fclose(f_p);
                stack_destroy(stack);
                free(sentence);
                return 3;
            }
        }
    }

    fclose(f_p);
    return 0;
}

int stack_save(const struct stack_t *stack, const char *filename) {
    if (stack == NULL || filename == NULL) return 1;

    FILE *f_p = fopen(filename, "w");
    if (f_p == NULL) {
        return 2;
    }

    struct stack_t *node = (struct stack_t*)stack;
    while (node != NULL) {
        fprintf(f_p, "%s", node -> sentence);
        node = node -> prev;
    }

    fclose(f_p);
    return 0;
}


