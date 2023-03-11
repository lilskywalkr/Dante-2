#include <stdio.h>

#include "functions.h"

int main() {
    unsigned int num1;
    unsigned short num2;
    unsigned long num3;
    int choice = 0, bits = 0, zero_bits = 0;

    printf("Enter data type:");
    if (!scanf("%d", &choice)) {
        printf("Incorrect input");
        return 1;
    }

    while (getchar() ^ '\n');

    if (choice != 0 && choice != 1 && choice != 2) {
        printf("Incorrect input data");
        return 2;
    }

    printf("Enter an integer number:");
    switch (choice) {
        case 0:
            if (!scanf("%u", &num1)) {
                printf("Incorrect input");
                return 1;
            }

            while (getchar() ^ '\n');

            COUNT_BITS(num1, &bits, &zero_bits)

            printf("%d\n%d\n", bits, zero_bits);
            DISPLAY_BITS(num1)

            REVERSE_BITS(&num1)
            DISPLAY_BITS(num1)
            break;
        case 1:
            if (!scanf("%hu", &num2)) {
                printf("Incorrect input");
                return 1;
            }

            while (getchar() ^ '\n');

            COUNT_BITS(num2, &bits, &zero_bits)

            printf("%d\n%d\n", bits, zero_bits);
            DISPLAY_BITS(num2)

            REVERSE_BITS(&num2)
            DISPLAY_BITS(num2)
            break;
        case 2:
            if (!scanf("%lu", &num3)) {
                printf("Incorrect input");
                return 1;
            }

            while (getchar() ^ '\n');

            COUNT_BITS(num3, &bits, &zero_bits)

            printf("%d\n%d\n", bits, zero_bits);
            DISPLAY_BITS(num3)

            REVERSE_BITS(&num3)
            DISPLAY_BITS(num3)
            break;
        default:
            break;
    }

    return 0;
}



