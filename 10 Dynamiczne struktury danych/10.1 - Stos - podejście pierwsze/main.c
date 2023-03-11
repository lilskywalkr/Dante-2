#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

#include "stack.h"

int main() {
    struct stack_t *stack;
    int N = 10, n = 0, choice = 0, value = 0;

    n = stack_init(&stack, N);
    if (n == 2) {
        printf("Failed to allocate memory");
        return 8;
    }

    do {
        printf("Co chcesz zrobic? ");
        if (!scanf("%d", &choice)) {
            printf("Incorrect input");
            stack_free(stack);
            return 1;
        }

        while (getchar() ^ '\n');

        if (choice != 0 && choice != 1 && choice != 2 && choice != 3) {
            printf("Incorrect input data\n");
        }

        if (choice == 1) {
            printf("Podaj liczbe:");
            if (!scanf("%d", &value)) {
                printf("Incorrect input");
                stack_free(stack);
                return 1;
            }

            while (getchar() ^ '\n');

            n = stack_push(stack, value);
            if (n == 2) {
                printf("Failed to allocate memory");
                stack_free(stack);
                return 8;
            }
        } else if (choice == 2) {
            int a = stack_pop(stack, &n);
            if (n == 2) {
                printf("Stack is empty\n");
            } else {
                printf("%d\n", a);
            }
        } else if (choice == 3) {
            if (stack -> head == 0) {
                printf("Stack is empty\n");
            } else {
                stack_display(stack);
            }
        }
    } while (choice);

    stack_free(stack);
    return 0;
}


