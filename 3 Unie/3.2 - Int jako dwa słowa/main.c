#include <stdio.h>
#include <math.h>
#include <limits.h>

#include "word_set.h"
#include "tested_declarations.h"
#include "rdebug.h"

int main() {
    union word_set uni;

    printf("Podaj liczbe:\n");
    if (!scanf("%u", &uni.a)) {
        printf("Incorrect input");
        return 1;
    }

    while (getchar() != '\n');

    for (int i = 0; i < 2; i++) printf("%u ", *(uni.arr + i));

    return 0;
}
