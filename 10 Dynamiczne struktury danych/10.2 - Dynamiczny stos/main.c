#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

#include "stack.h"

int main() {
    struct stack_t *stack;
    int n = stack_init(&stack), operation = 0, value = 0;

    if (n == 2) {
        printf("Failed to allocate memory");
        return 8;
    }

    do {
        printf("Co chcesz zrobic? ");
        if (!scanf("%d", &operation)) {
            printf("Incorrect input");
            stack_destroy(&stack);
            return 1;
        }

        while (getchar() ^ '\n');

        if (operation == 1) {
            printf("Podaj liczbe: ");
            if (!scanf("%d", &value)) {
                printf("Incorrect input");
                stack_destroy(&stack);
                return 1;
            }

            while (getchar() ^ '\n');

            n = stack_push(stack, value);
            if (n == 2) {
                printf("Failed to allocate memory");
                stack_destroy(&stack);
                return 8;
            }
        } else if (operation == 2) {
            int pop = stack_pop(stack, &n);
            if (n == 1) {
                printf("Stack is empty\n");
            } else {
                printf("%d\n", pop);
            }
        } else if (operation == 3) {
            printf("%d\n", stack_empty(stack));
        } else if (operation == 4) {
            if (stack_empty(stack)) {
                printf("Stack is empty\n");
            } else {
                stack_display(stack);
            }
        } else {
            if (operation) {
                printf("Incorrect input data\n");
            }
        }
    } while (operation);

    stack_destroy(&stack);
    return 0;
}



