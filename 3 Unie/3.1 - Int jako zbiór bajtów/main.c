#include <stdio.h>
#include <math.h>
#include <limits.h>

#include "byte_set.h"
#include "tested_declarations.h"
#include "rdebug.h"

int main() {
    union byte_set uni;

    printf("Podaj liczbe:\n");
    if (!scanf("%d", &uni.a)) {
        printf("Incorrect input");
        return 1;
    }

    while (getchar() != '\n');

    for (int i = 0; i < 4; i++) printf("%d ", *(uni.arr + i));



    return 0;
}
