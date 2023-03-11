#include <stdio.h>
#include "tested_declarations.h"
#include "rdebug.h"

int main() {
    char nazwa_zmiennej[31];
    char *f_name_p = (void *)nazwa_zmiennej;
    FILE *f_p;

    printf("Podaj sciezke do pliku:");
    scanf("%30[^\n]", f_name_p);

    f_p = fopen(f_name_p, "w");
    if (f_p == NULL) {
        printf("Couldn't create file");
        return 5;
    }

    int ch = 0;
    for (int i = 0; i <= 100; i++) {
        ch = i;
        fprintf(f_p, "%d\n", ch);
    }

    printf("File saved");

    fclose(f_p);

    return 0;
}
