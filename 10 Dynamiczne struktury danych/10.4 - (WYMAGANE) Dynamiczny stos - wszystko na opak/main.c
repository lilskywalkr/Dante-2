#include <stdio.h>

#include "stack.h"

int main(int args, char **arcs) {
    int err_code = 0;
    char *filename;
    struct stack_t *stack = NULL;

    if (args <= 1) {
        printf("Not enough arguments");
        return 9;
    }

    for (int i = 1; i < args; i++) {
        filename = *(arcs + i);
        err_code = stack_load(&stack, filename);

        if (err_code == 2) {
            printf("Couldn't open file %s\n", filename);
        } else if (err_code == 1 || err_code == 3) {
            printf("Failed to allocate memory");
            return 8;
        } else {
            err_code = stack_save(stack, filename);

            if (err_code == 1 || err_code == 2) {
                printf("Couldn't create file");
                stack_destroy(&stack);
                return 5;
            }

            printf("File %s saved\n", filename);
            stack_destroy(&stack);
            stack = NULL;
        }
    }

    return 0;
}


