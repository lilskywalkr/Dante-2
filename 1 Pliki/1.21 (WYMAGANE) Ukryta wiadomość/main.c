#include <stdio.h>
#include "tested_declarations.h"
#include "rdebug.h"

int main() {
    char nazwa_zmiennej[31] = {0};
    char *file_name_p = (void *)&nazwa_zmiennej;
    int n = 0, len = 0, init = 0, tmp = 0, len2 = 0;
    char ch = 0;
    FILE *f_p;

    printf("Podaj sciezke do pliku:\n");
    scanf("%30[^\n]", file_name_p);

    f_p = fopen(file_name_p, "r");

    if (f_p == NULL) {
        printf("Couldn't open file");
        return 4;
    }

    while ((n = fgetc(f_p)) != '\n') {
        if ((n < '0' || n > '9') && n != ' ') {
            printf("File corrupted");
            fclose(f_p);
            return 6;
        }
        len2++;
    }

    fseek(f_p, 0, SEEK_END);
    len = ftell(f_p);
    if (!len) {
        printf("File corrupted");
        fclose(f_p);
        return 6;
    }

    fseek(f_p, 0, SEEK_SET);
    while (fscanf(f_p, "%d ", &tmp)) {
//        init = ftell(f_p);
        if (tmp >= len || tmp < len2) {
            printf("File corrupted");
            fclose(f_p);
            return 6;
        }
    }

    fseek(f_p, 0, SEEK_SET);
    while (fscanf(f_p, "%d ", &tmp)) {
        init = ftell(f_p);
        fseek(f_p, tmp, SEEK_SET);
        fscanf(f_p, "%c", &ch);
        printf("%c", ch);
        fseek(f_p, init, SEEK_SET);
    }

    fclose(f_p);

    return 0;
}
