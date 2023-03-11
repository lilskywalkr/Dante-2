#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

#include "functions.h"

int main() {
    char *text = calloc(1001, sizeof(char)), **result;
    ptr_func *funcs;
    int *choice, ch = 0;

    if (text == NULL) {
        printf("Failed to allocate memory");
        return 8;
    }

    funcs = calloc(4, sizeof(ptr_func));
    if (funcs == NULL) {
        free(text);
        printf("Failed to allocate memory");
        return 8;
    }

    *(funcs + 0) = lower_to_upper;
    *(funcs + 1) = upper_to_lower;
    *(funcs + 2) = reverse_letter;
    *(funcs + 3) = space_to_dash;

    choice = calloc(4, sizeof(int));
    if (choice == NULL) {
        free(text);
        free(funcs);
        printf("Failed to allocate memory");
        return 8;
    }

    printf("Podaj tekst do przeksztalcenia:\n");
    scanf("%1000[^\n]", text);

    while (getchar() != '\n');

    printf("Podaj liczbe operacj do przeprowadzenia:");
    if (!scanf("%d", &ch)) {
        free(text);
        free(funcs);
        free(choice);
        printf("Incorrect input");
        return 1;
    }

    while (getchar() != '\n');

    if (ch < 2 || ch > 4) {
        free(text);
        free(funcs);
        free(choice);
        printf("Incorrect input data");
        return 2;
    }

    printf("Podaj wybrane operacje:");
    for (int i = 0; i < ch; i++) {
        if (!scanf("%d", (choice + i))) {
            free(text);
            free(funcs);
            free(choice);
            printf("Incorrect input");
            return 1;
        }

        if (*(choice + i) < 0 || *(choice + i) > 3) {
            free(text);
            free(funcs);
            free(choice);
            printf("Incorrect input data");
            return 2;
        }
    }

    while (getchar() != '\n');

    switch (ch) {
        case 2:
            result = text_modifier(text, ch, *(funcs + *(choice + 0)), *(funcs + *(choice + 1)));
            if (result == NULL) {
                free(text);
                free(funcs);
                free(choice);
                printf("Failed to allocate memory");
                return 8;
            }
            display((const char **)result);
            break;
        case 3:
            result = text_modifier(text, ch, *(funcs + *(choice + 0)), *(funcs + *(choice + 1)), *(funcs + *(choice + 2)));
            if (result == NULL) {
                free(text);
                free(funcs);
                free(choice);
                printf("Failed to allocate memory");
                return 8;
            }
            display((const char **)result);
            break;
        case 4:
            result = text_modifier(text, ch, *(funcs + *(choice + 0)), *(funcs + *(choice + 1)), *(funcs + *(choice + 2)), *(funcs + *(choice + 3)));
            if (result == NULL) {
                free(text);
                free(funcs);
                free(choice);
                printf("Failed to allocate memory");
                return 8;
            }
            display((const char **)result);
            break;
        default:
            break;
    }

    free(text);
    free(choice);
    free(funcs);
    free_texts(result);

    return 0;
}


