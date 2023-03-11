//
// Created by ronnie on 31.03.2022.
//

#ifndef UNTITLED_STACK_H
#define UNTITLED_STACK_H

struct stack_t {
    char *sentence;
    struct stack_t *prev;
};

int stack_push(struct stack_t **stack, char *value);
char *stack_pop(struct stack_t **stack, int *err_code);
void stack_destroy(struct stack_t **stack);
int stack_load(struct stack_t **stack, const char *filename);
int stack_save(const struct stack_t *stack, const char *filename);
void recursive_destroy(struct stack_t *stack);

#endif //UNTITLED_STACK_H
