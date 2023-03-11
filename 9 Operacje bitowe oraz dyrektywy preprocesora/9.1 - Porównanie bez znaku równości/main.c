#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

int is_equal(int a, int b);
int is_negative(int value);

int main() {
    int a = 0, b = 0;
    printf("Podaj dwie liczby:");
    if ((scanf("%d %d", &a, &b) ^ 2)) {
        printf("Incorrect input");
        return 1;
    }

    while ((getchar() ^ '\n'));

    if (is_equal(a, b)) {
        printf("rowne\n");
    } else {
        printf("nierowne\n");
    }

    if (is_negative(a)) {
        printf("ujemna ");
    } else {
        printf("nieujemna ");
    }

    if (is_negative(b)) {
        printf("ujemna");
    } else {
        printf("nieujemna");
    }

    return 0;
}


int is_equal(int a, int b) {
    return !(a ^ b);
}

int is_negative(int value) {
    if (value & (1 << 31)) {
        return 1;
    } else {
        return 0;
    }
}

