#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

int main() {
    unsigned long long a = 0, b = 0;

    printf("Enter number:");
    if  (!scanf("%llu", &a)) {
        printf("Incorrect input");
        return 1;
    }

    while (getchar() ^ '\n');

    for (int idx = sizeof(unsigned long long) * 8 - 1; idx >= 0; idx -= 1) {
        b =a>> idx;

        if (b & 1) printf("%d", 1);
        else printf("0");

        if (idx % 8 == 0) printf(" ");
    }

    return 0;
}