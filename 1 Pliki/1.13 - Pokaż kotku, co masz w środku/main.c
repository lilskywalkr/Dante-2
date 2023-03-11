#include <stdio.h>
#include "tested_declarations.h"
#include "rdebug.h"

int main() {
    char nazwa_zmiennej[31] = {0};
    char *file_name_p = (void *)&nazwa_zmiennej;
    int ch = 0;
    FILE *f_p;

    printf("Podaj sciezke do pliku:\n");
    scanf("%30[^\n]", file_name_p);

    f_p = fopen(file_name_p, "r");

    if (f_p == NULL) {
        printf("Couldn't open file");
        return 4;
    }

    while ((ch = fgetc(f_p)) != EOF) printf("%d ", ch);

    fclose(f_p);

    return 0;
}
