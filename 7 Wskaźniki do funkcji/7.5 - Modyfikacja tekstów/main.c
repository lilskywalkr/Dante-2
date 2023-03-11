#include <stdio.h>
#include <stdlib.h>

#include "char_operations.h"

int main() {
    ptr_func function[4] = {lower_to_upper, upper_to_lower, space_to_dash, reverse_letter};
    int choice = 0;
    char *txt = calloc(1001, sizeof(char));

    if (txt == NULL) {
        printf("Failed to allocate memory");
        return 8;
    }

    printf("Podaj tekst");
    scanf("%1000[^\n]", txt);

    while (getchar() != '\n');

    printf("Podaj operacje:");

    if (!scanf("%d", &choice)) {
        printf("Incorrect input");
        free(txt);
        return 1;
    }

    while (getchar() != '\n');

    if (choice != 0 && choice != 1 && choice != 2 && choice != 3) {
        printf("Incorrect input data");
        free(txt);
        return 2;
    }

    char *result = letter_modifier(txt, *(function + choice));

    if (result == NULL) {
        printf("Failed to allocate memory");
        free(txt);
        return 8;
    }

    printf("%s", result);

    free(result);
    free(txt);
    return 0;
}


