#include <stdio.h>
#include "tested_declarations.h"
#include "rdebug.h"

int main() {
    char nazwa_zmiennej[31];
    char *f_name_p = (void *)nazwa_zmiennej;
    FILE *f_p;

    printf("Podaj sciezke do pliku:");
    scanf("%30[^\n]", f_name_p);

    f_p = fopen(f_name_p, "r");
    if (f_p == NULL) {
        printf("Couldn't open file");
        return 4;
    }

    int ch = fgetc(f_p);
    if (ch == EOF) {
        printf("nothing to show");
    } else {
        while (ch != EOF) {
            putchar(ch);
            ch = fgetc(f_p);
        }
    }

    fclose(f_p);

    return 0;
}

