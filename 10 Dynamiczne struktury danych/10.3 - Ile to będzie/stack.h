//
// Created by ronnie on 31.03.2022.
//

#ifndef UNTITLED_STACK_H
#define UNTITLED_STACK_H

struct stack_t {
    struct node_t *head;
};

struct node_t {
    double data;
    struct node_t* next;
};

int stack_init(struct stack_t **stack);
int stack_push(struct stack_t *stack, double value);
void stack_display(const struct stack_t* stack);
double stack_pop(struct stack_t* stack, int *err_code);
void stack_destroy(struct stack_t** stack);
int stack_size(const struct stack_t* stack);
int stack_empty(const struct stack_t* stack);

#endif //UNTITLED_STACK_H
