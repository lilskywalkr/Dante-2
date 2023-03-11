#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "big_numbers.h"

int main() {
    int err_code = 0, n = 0, nums = 0, flg = 1;
    struct big_numbers_t *bn;

    err_code = create_big_numbers(&bn, 10);

    if (err_code == 2) {
        printf("Failed to allocate memory");
        return 8;
    }

    char *number = calloc(201, sizeof(char));

    if (number == NULL) {
        printf("Failed to allocate memory");
        destroy_big_numbers(&bn);
        return 8;
    }

    printf("Podaj liczby:\n");

    for (int i = 0; flg; i++) {
        memset(number, 0, 200);
        scanf("%200[^\n]", number);

        while (getchar() != '\n');

        n = add_big_number(bn, number);
        nums += ((int)strlen(number) > 0 ? 1 : 0);

        if (nums && (int)strlen(number)) {
            if (n == 1) {
                printf("Incorrect input\n");
                continue;
            } else if (n == 2) {
                printf("Failed to allocate memory\n");
                break;
            } else if (n == 3) {
                printf("Buffer is full\n");
                break;
            }
        }

        if (!nums || nums > 10) flg = 0;

        if (strlen(number) == 0) break;
    }


    if (!nums) {
        printf("Buffer is empty\n");
    }

    display(bn);

    free(number);
    destroy_big_numbers(&bn);
    return 0;
}


