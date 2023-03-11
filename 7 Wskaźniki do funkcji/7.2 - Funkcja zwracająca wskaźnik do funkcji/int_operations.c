#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "int_operations.h"

int add_int(int a, int b) {
    return a + b;
}

int sub_int(int a, int b) {
    return a - b;
}
int mul_int(int a, int b) {
    return a * b;
}

int div_int(int a, int b) {
    return b ? a / b : 0;
}

int calculate(int a, int b, ptr_func function) {
    return function(a, b);
}

ptr_func get_function(enum operations_t operation) {
    switch (operation) {
        case op_add:
            return &add_int;
        case op_sub:
            return &sub_int;
        case op_mul:
            return &mul_int;
        case op_div:
            return &div_int;
        default:
            return NULL;
    }
}
