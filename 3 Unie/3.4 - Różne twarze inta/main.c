#include <stdio.h>
#include <math.h>
#include <limits.h>

#include "bit_set.h"

int main() {
    union bit_set uni;

    printf("Podaj liczbe:");
    if (!scanf("%u", &uni.a)) {
        printf("Incorrect input");
        return 1;
    }

    while (getchar() != '\n');

    printf("%u\n", (uni.a));
    for (int i = 0; i < 2; i++) printf("%u ", *(uni.arr1 + i));
    printf("\n");
    for (int i = 0; i < 4; i++) printf("%u ", *(uni.arr2 + i));
    printf("\n");
    for (int i = 0; i < 4; i++) {
        printf("%u", (uni.arr3 + i) -> b8);
        printf("%u", (uni.arr3 + i) -> b7);
        printf("%u", (uni.arr3 + i) -> b6);
        printf("%u", (uni.arr3 + i) -> b5);
        printf("%u", (uni.arr3 + i) -> b4);
        printf("%u", (uni.arr3 + i) -> b3);
        printf("%u", (uni.arr3 + i) -> b2);
        printf("%u ", (uni.arr3 + i) -> b1);
    }
//    for (int i = 0; i < 2; i++) printf("%u ", *(uni.arr + i));

    return 0;
}