#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#include "int_operations.h"

int main() {
    int a = 0, b = 0, n = 0, ch = 0;
    ptr_func function[4] = {add_int, sub_int, div_int, mul_int};

    printf("Enter numbers:");
    n = scanf("%d %d", &a, &b);

    while (getchar() != '\n');

    if (n != 2) {
        printf("Incorrect input");
        return 1;
    }

    printf("Choose an operation:");
    n = scanf("%d", &ch);

    while (getchar() != '\n');

    if (n != 1) {
        printf("Incorrect input");
        return 1;
    }

    if (ch != 0 && ch != 1 && ch != 2 && ch != 3) {
        printf("Incorrect input data");
        return 2;
    }

    if (ch == 2 && a < b) {
        printf("%d", b);
    } else {
        printf("%d", calculate(a, b, *(function + ch)));
    }

    return 0;
}

