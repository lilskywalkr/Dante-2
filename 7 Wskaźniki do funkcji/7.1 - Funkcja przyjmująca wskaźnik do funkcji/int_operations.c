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
