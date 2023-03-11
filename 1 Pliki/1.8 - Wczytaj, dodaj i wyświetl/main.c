#include <stdio.h>
#include "tested_declarations.h"
#include "rdebug.h"

int main() {
    char nazwa_zmiennej[31] = {0};
    char *file_name_p = (void *)&nazwa_zmiennej;
    FILE *f_p;

    printf("Podaj sciezke do pliku:\n");
    scanf("%30[^\n]", file_name_p);

    f_p = fopen(file_name_p, "r");
    if (f_p == NULL) {
        printf("Couldn't open file");
        return 4;
    }

    int num = 0, n = 0, sum = 0;
    while ((n = fscanf(f_p, "%d", &num)) != EOF) {
        if (!n) {
            printf("File corrupted");
            fclose(f_p);
            return 6;
        }
        sum += num;
    }

    printf("Suma liczb: %d", sum);
    fclose(f_p);


    return 0;
}
