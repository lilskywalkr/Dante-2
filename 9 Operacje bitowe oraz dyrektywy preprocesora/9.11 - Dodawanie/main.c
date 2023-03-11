#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

unsigned long long add(unsigned long long a, unsigned long long b);

int main() {
    unsigned long long a = 0, b = 0, c = 0;

    printf("Enter numbers:");
    if  ((scanf("%llu %llu", &a, &b) ^ 2)) {
        printf("Incorrect input");
        return 1;
    }

    while ((getchar() ^ '\n'));

    c = add(a, b);

    printf("%llu", c);

    return 0;
}

unsigned long long add(unsigned long long a, unsigned long long b) {
    unsigned long long carrey = 0;
    while (b ^ 0) {
        carrey = a & b;
        a = a ^ b;
        b = carrey << 1;
    }

    return a;
}
