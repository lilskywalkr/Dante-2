//
// Created by root on 3/20/22.
//

#ifndef EMPTY_PROJECT_INT_OPERATIONS_H
#define EMPTY_PROJECT_INT_OPERATIONS_H

typedef int (*ptr_func)(int, int);

enum operations_t {
    op_add = 0,
    op_sub = 1,
    op_div = 2,
    op_mul = 3,
};

ptr_func get_function(enum operations_t operation);

int add_int(int a, int b);
int sub_int(int a, int b);
int mul_int(int a, int b);
int div_int(int a, int b);
int calculate(int a, int b, ptr_func function);

#endif //EMPTY_PROJECT_INT_OPERATIONS_H
