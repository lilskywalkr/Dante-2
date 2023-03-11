#include <stdio.h>
#include "tested_declarations.h"
#include "rdebug.h"

int main() {
    char nazwa_zmiennej1[31];
    char nazwa_zmiennej2[31];
    char *f_name1_p = (void *)nazwa_zmiennej1;
    char *f_name2_p = (void *)nazwa_zmiennej2;
    FILE *f1_p, *f2_p;

    printf("Podaj sciezke do pliku:");
    scanf("%30[^\n]", f_name1_p);

    f1_p = fopen(f_name1_p, "r");
    if (f1_p == NULL) {
        printf("Couldn't open file");
        return 4;
    }

    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }

    printf("Podaj sciezke do pliku wyjsciowego:");
    scanf("%30[^\n]", f_name2_p);

    f2_p = fopen(f_name2_p, "w");
    if (f2_p == NULL) {
        printf("Couldn't create file");
        fclose(f1_p);
        return 5;
    }

    int ch = fgetc(f1_p);
    while (ch != EOF) {
        fputc(ch, f2_p);
        ch = fgetc(f1_p);
    }

    printf("File copied");

    fclose(f1_p);
    fclose(f2_p);

    return 0;
}
