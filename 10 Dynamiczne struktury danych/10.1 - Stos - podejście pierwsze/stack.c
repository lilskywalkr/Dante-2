#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "stack.h"

int stack_init(struct stack_t **stack, int N) {
    if (stack == NULL || N <= 0) return 1;

    *stack = calloc(1, sizeof(struct stack_t));
    if (*stack == NULL) {
        return 2;
    }

    int *tmp = calloc(N, sizeof(int));
    if (tmp == NULL) {
        free(*stack);
        *stack = NULL;
        return 2;
    }

    (*stack) -> data = tmp;
    (*stack) -> capacity = N;
    (*stack) -> head = 0;

    return 0;
}

int stack_push(struct stack_t *stack, int value) {
    if (stack == NULL || stack -> data == NULL || stack -> capacity <= 0 || stack -> head < 0 || stack -> capacity < stack -> head) return 1;

    if (stack -> head == stack -> capacity) {
        int *tmp = realloc(stack -> data, sizeof(int) * stack -> capacity * 2);
        if (tmp == NULL) {
            return 2;
        }
        stack -> data = tmp;
        stack -> capacity *= 2;
    }

    *(stack -> data + stack -> head) = value;
    stack -> head += 1;

    return 0;
}

int stack_pop(struct stack_t *stack, int *err_code) {
    if (stack == NULL || stack -> data == NULL || stack -> capacity <= 0 || stack -> head < 0 || stack -> capacity < stack -> head) {
        if (err_code != NULL) {
            *err_code = 1;
        }
        return 19112000;
    }

    if (stack -> head == 0) {
        if (err_code != NULL) {
            *err_code = 2;
        }
        return 19112000;
    }

    if (err_code != NULL) {
        *err_code = 0;
    }

    int value = *(stack -> data + stack -> head - 1);
    stack -> head -= 1;

    return value;
}

void stack_display(const struct stack_t *stack) {
    if (stack != NULL && stack -> data != NULL && stack -> head > 0 && stack -> capacity > 0 && stack -> head <= stack -> capacity) {
        for (int i = stack -> head - 1; i >= 0; i--) {
            printf("%d ", *(stack -> data + i));
        }
        printf("\n");
    }
}

void stack_free(struct stack_t *stack) {
    if (stack != NULL && stack -> data != NULL && stack -> head >= 0 && stack -> capacity > 0 && stack -> head <= stack -> capacity) {
        free(stack -> data);
        free(stack);
    }
}

