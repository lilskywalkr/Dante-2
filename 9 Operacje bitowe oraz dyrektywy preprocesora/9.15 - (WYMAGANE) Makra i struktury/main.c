#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

#include "functions.h"

DEFINE_ARRAY(int)
DEFINE_ARRAY(double)

CREATE_ARRAY(int)
CREATE_ARRAY(double)

FREE_ARRAY(int)
FREE_ARRAY(double)

SAVE_ARRAY(int)
SAVE_ARRAY(double)

LOAD_ARRAY(int)
LOAD_ARRAY(double)

SORT_ARRAY(int)
SORT_ARRAY(double)

int main() {
    int type = 0, n = 0;
    struct array_int_t *array_int_t;
    struct array_double_t *array_double_t;
    char *filename = calloc(31, sizeof(char));
    if (filename == NULL) {
        printf("Failed to allocate memory");
        return 8;
    }

    printf("Enter filename:");
    scanf("%30s", filename);

    while (getchar() ^ '\n');

    printf("Choose your type:");
    if (!scanf("%d", &type)) {
        printf("Incorrect input");
        free(filename);
        return 1;
    }

    while (getchar() ^ '\n');

    if (type != 0 && type != 1) {
        printf("Incorrect input data");
        free(filename);
        return 2;
    }

    switch (type) {
        case 0:
            n = load_array_int(&array_int_t, filename);
            if (n == 2) {
                printf("Couldn't open file");
                free(filename);
                return 4;
            } else if (n == 3){
                printf("File corrupted");
                free(filename);
                return 6;
            } else if (n == 4) {
                printf("Failed to allocate memory");
                free(filename);
                return 8;
            }

            sort_array_int(array_int_t);

            n = save_array_int(array_int_t, filename);
            if (n == 2) {
                printf("Couldn't create file");
                free(filename);
                free_array_int(array_int_t);
                return 5;
            }

            free_array_int(array_int_t);
            break;
        case 1:
            n = load_array_double(&array_double_t, filename);
            if (n == 2) {
                printf("Couldn't open file");
                free(filename);
                return 4;
            } else if (n == 3){
                printf("File corrupted");
                free(filename);
                return 6;
            } else if (n == 4) {
                printf("Failed to allocate memory");
                free(filename);
                return 8;
            }

            sort_array_double((struct array_double_t *) array_double_t);

            n = save_array_double(array_double_t, filename);
            if (n == 2) {
                printf("Couldn't create file");
                free(filename);
                free_array_double(array_double_t);
                return 5;
            }

            free_array_double(array_double_t);
            break;
        default:
            break;
    }

    printf("File saved");
    free(filename);
    return 0;
}


