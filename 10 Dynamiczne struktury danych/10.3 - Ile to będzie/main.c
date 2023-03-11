#include <stdio.h>
#include <ctype.h>

#include "stack.h"

int main() {
    struct stack_t *stack;
    int n = 0, n1 = 0, n2 = 0, flg = 0, pushed = 0, not_digit = 0, space_count = 0, operations = 0, numbers_count = 0;
    double result = 0.0, value = 0.0, number1 = 0.0, number2 = 0.0;
    char ch;

    n = stack_init(&stack);

    if (n == 2) {
        printf("Failed to allocate memory");
        return 8;
    }

    printf("Enter expression:");

    do {
        ch = (char) getchar();
        if (isdigit(ch)) {
            value *= 10;
            value += ch - '0';
            pushed = 0;
            not_digit = 0;
        } else if (ch == ' ' && not_digit == 0) {
            if (pushed == 0) {
                value *= (flg ? -1 : 1);
                n = stack_push(stack, value);
                numbers_count += 1;
                if (n == 2) {
                    printf("Failed to allocate memory");
                    stack_destroy(&stack);
                    return 8;
                }
                value = 0.0;
                pushed = 1;
                flg = 0;
            }
            space_count += 1;
        } else if ((ch == '-' || ch == '\n') || (ch == ' ' && not_digit == 1)) {
            if (flg == 0) {
                flg = 1;
                not_digit = 1;
            } else {
                if (space_count) {
                    operations += 1;
                    number1 = stack_pop(stack, &n1);
                    number2 = stack_pop(stack, &n2);

                    if (n1 == 1 || n2 == 1) {
                        printf("Incorrect expression");
                        stack_destroy(&stack);
                        return 2;
                    }

                    result = number2 - number1;
                    n = stack_push(stack, result);
                    if (n == 2) {
                        printf("Failed to allocate memory");
                        stack_destroy(&stack);
                        return 8;
                    }
                    flg = 0;
                    pushed = 1;
                    not_digit = 0;
                }
            }
        } else if (ch == '+') {
            operations += 1;
            number1 = stack_pop(stack, &n1);
            number2 = stack_pop(stack, &n2);

            if (n1 == 1 || n2 == 1) {
                printf("Incorrect expression");
                stack_destroy(&stack);
                return 2;
            }

            result = number2 + number1;
            n = stack_push(stack, result);
            if (n == 2) {
                printf("Failed to allocate memory");
                stack_destroy(&stack);
                return 8;
            }
            pushed = 1;
        } else if (ch == '*') {
            operations += 1;
            number1 = stack_pop(stack, &n1);
            number2 = stack_pop(stack, &n2);

            if (n1 == 1 || n2 == 1) {
                printf("Incorrect expression");
                stack_destroy(&stack);
                return 2;
            }

            result = number2 * number1;
            n = stack_push(stack, result);
            if (n == 2) {
                printf("Failed to allocate memory");
                stack_destroy(&stack);
                return 8;
            }
            pushed = 1;
        } else if (ch == '/') {
            operations += 1;
            number1 = stack_pop(stack, &n1);
            number2 = stack_pop(stack, &n2);

            if ((n1 == 1 || n2 == 1) || number1 == 0) {
                printf("Incorrect expression");
                stack_destroy(&stack);
                return 2;
            }

            result = number2 / number1;
            n = stack_push(stack, result);
            if (n == 2) {
                printf("Failed to allocate memory");
                stack_destroy(&stack);
                return 8;
            }
            pushed = 1;
        } else {
            if (ch != '\n') {
                printf("Incorrect input");
                stack_destroy(&stack);
                return 1;
            }
        }
    } while (ch != '\n');


    if ((stack_size(stack) == 1 && stack -> head -> data != result) || stack_size(stack) > 1) {
        printf("Incorrect expression");
        stack_destroy(&stack);
        return 2;
    }

    if (value) {
        value *= (flg && !not_digit ? -1 : 1);
        result = value;
        numbers_count += 1;
    }

    if (ch == '~' && stack_empty(stack)) {
        stack_display(stack);
    }

    if (operations + 1 != numbers_count) {
        printf("Incorrect expression");
        stack_destroy(&stack);
        return 2;
    }

    printf("%lf", result);
    stack_destroy(&stack);

    return 0;
}


