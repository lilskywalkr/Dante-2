//
// Created by ronnie on 31.03.2022.
//

#include <stdio.h>
#include <stdlib.h>

#include "stack.h"

int stack_init(struct stack_t **stack) {
    if (stack == NULL) return 1;

    *stack = calloc(1, sizeof(struct stack_t));
    if (*stack == NULL) {
        return 2;
    }

    (*stack) -> head = NULL;

    return 0;
}

int stack_push(struct stack_t *stack, double value) {
    if (stack == NULL) return 1;

    struct node_t *tmp = calloc(1, sizeof(struct node_t));
    if (tmp == NULL) {
        return 2;
    }

    if (stack -> head == NULL) {
        stack -> head = tmp;
        stack -> head -> data = value;
        stack -> head -> next = NULL;
    } else {
        tmp -> data = value;
        tmp -> next = stack -> head;
        stack -> head = tmp;
    }

    return 0;
}

double stack_pop(struct stack_t *stack, int *err_code) {
    if (stack == NULL) {
        if (err_code != NULL) {
            *err_code = 1;
        }
        return 19112000;
    }

    double value = 19112000;
    if (stack -> head != NULL) {
        value = stack -> head -> data;
        struct node_t *tmp = stack -> head -> next;
        free(stack -> head);
        stack -> head = NULL;
        stack -> head = tmp;

        if (err_code != NULL) {
            *err_code = 0;
        }
    } else {
        if (err_code != NULL) {
            *err_code = 1;
        }
    }

    return value;
}

void stack_display(const struct stack_t *stack) {
    if (stack != NULL && stack -> head != NULL) {
        struct node_t *node = stack -> head;
        while (node != NULL) {
            printf("%.2lf ", node -> data);
            node = node -> next;
        }
        printf("\n");
    }
}

void stack_destroy(struct stack_t** stack) {
    if (stack != NULL) {
        while ((*stack) -> head != NULL) {
            struct node_t *node = (*stack) -> head;
            (*stack) -> head = node -> next;
            free(node);
        }
        free((*stack) -> head);
        free((*stack));
    }
}

int stack_empty(const struct stack_t* stack) {
    if (stack == NULL) return 2;

    if (stack -> head == NULL) return 1;

    return 0;
}

int recursion_count(struct node_t *stack, int *length) {
    if (stack == NULL || length == NULL) return 0;

    if (stack -> next != NULL) {
        *length += 1;
        recursion_count(stack -> next, length);
    }

    return *length;
}

int stack_size(const struct stack_t* stack) {
    if (stack == NULL) return -1;

    int length = 1;
    length = recursion_count(stack -> head, &length);

    return length;
}

