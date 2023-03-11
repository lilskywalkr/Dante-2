#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

int main() {
    long a = 1;

    printf("Podaj liczbe:");
    if (!scanf("%ld", &a)) {
        printf("Input error");
        return ~1 + 1;
    }

    printf("Wynik: %ld", ~a + 1);

    return 0;
}