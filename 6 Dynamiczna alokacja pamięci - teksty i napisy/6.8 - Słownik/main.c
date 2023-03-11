#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include "dictionary.h"

int main() {
    char *filename = calloc(50, sizeof(char));
    FILE *f_p;
    int err_code = 0;

    if (filename == NULL) {
        printf("Failed to allocate memory");
        return 8;
    }

    printf("Podaj nazwe pliku:");
    scanf("%49[^\n]", filename);

    while (getchar() != '\n');

    f_p = fopen(filename, "r");
    free(filename);

    if (f_p == NULL) {
        printf("Couldn't open file");
        return 4;
    }

    struct dictionary_t *d = create_dictionary(10, &err_code);

    if (err_code == 1 || err_code == 2) {
        printf("Failed to allocate memory");
        fclose(f_p);
        return 8;
    }

    while (!feof(f_p)) {
        int i = (int)ftell(f_p);
        int j = i;
        for (;isalpha(fgetc(f_p)); j++);

        if (j > i) {
            char *word = calloc((j - i) + 1, sizeof(char));

            if (word == NULL) {
                printf("Failed to allocate memory");
                fclose(f_p);
                destroy_dictionary(&d);
                return 8;
            }

            fseek(f_p, i, SEEK_SET);
            for (int k = 0; k < (j - i); k++) {
                *(word + k) = (char)fgetc(f_p);
            }

            err_code = dictionary_add_word(d, word);
            if (err_code == 1 || err_code == 2) {
                printf("Failed to allocate memory");
                fclose(f_p);
                destroy_dictionary(&d);
                free(word);
                return 8;
            }
            free(word);
        }
    }

    if (d -> size == 0) {
        printf("Nothing to show");
    } else {
        dictionary_display(d);
    }

    destroy_dictionary(&d);
    fclose(f_p);
    return 0;
}



