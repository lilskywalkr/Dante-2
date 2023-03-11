#include <stdio.h>
#include <math.h>
#include <limits.h>

#include "bit_set.h"

int main() {
    union bit_set uni;
    int flg = 0;

    printf("Podaj liczbe:");
    if (!scanf("%u", &uni.a)) {
        printf("Incorrect input");
        return 1;
    }

    while (getchar() != '\n');

    for (int i = 0; i < 4; i++) {
        flg += (((uni.arr3 + i) -> b8) == 1 ? 1 : 0);
        flg += (((uni.arr3 + i) -> b7) == 1 ? 1 : 0);
        flg += (((uni.arr3 + i) -> b6) == 1 ? 1 : 0);
        flg += (((uni.arr3 + i) -> b5) == 1 ? 1 : 0);
        flg += (((uni.arr3 + i) -> b4) == 1 ? 1 : 0);
        flg += (((uni.arr3 + i) -> b3) == 1 ? 1 : 0);
        flg += (((uni.arr3 + i) -> b2) == 1 ? 1 : 0);
        flg += (((uni.arr3 + i) -> b1) == 1 ? 1 : 0);
    }

    flg % 2 == 0 ? printf("YES") : printf("NO");
//    for (int i = 0; i < 2; i++) printf("%u ", *(uni.arr + i));

    return 0;
}