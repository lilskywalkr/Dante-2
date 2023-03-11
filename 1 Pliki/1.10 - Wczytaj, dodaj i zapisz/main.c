#include <stdio.h>
#include "tested_declarations.h"
#include "rdebug.h"

void end_of_line(FILE *f) {
    fseek(f, -1, SEEK_END);
    int ch = fgetc(f);
    fseek(f, EOF, SEEK_END);
    fprintf(f, "%c \n", ch);
}

int main() {
    char nazwa_zmiennej1[31] = {0};
    char nazwa_zmiennej2[31] = {0};
    char *file_name_p1 = (void *)&nazwa_zmiennej1;
    char *file_name_p2 = (void *)&nazwa_zmiennej2;
    int nums = 0, tmp = 0, sum = 0, ch = 0, neg = 1;
    FILE *f_p1, *f_p2;

    printf("Podaj sciezke do pliku zrodlowego:\n");
    scanf("%30[^\n]", file_name_p1);

    f_p1 = fopen(file_name_p1, "r+");
    if (f_p1 == NULL) {
        printf("Couldn't open file");
        return 4;
    }

    while ((ch = fgetc(f_p1)) != EOF) {
        if (ch >= '0' && ch <= '9') {
            nums = 1;
            break;
        }
    }
    if (!nums) {
        printf("File corrupted");
        fclose(f_p1);
        return 6;
    }

    end_of_line(f_p1);

    while (getchar() != '\n') { }

    printf("Podaj sciezke do pliku docelowego:\n");
    scanf("%30[^\n]", file_name_p2);

    f_p2 = fopen(file_name_p2, "w");
    if (f_p2 == NULL) {
        printf("Couldn't create file");
        fclose(f_p1);
        return 5;
    }

    fseek(f_p1, 0, SEEK_SET);
    nums = 0;
    while ((ch = fgetc(f_p1)) != EOF) {
        do  {
            if (ch == '-') {
                neg = -1;
                ch = fgetc(f_p1);
            }

            if (ch >= '0' && ch <= '9') {
                tmp = tmp * 10 + (ch - '0');
                nums = 1;
            } else if (ch != '-') {
                tmp = tmp * neg;
                sum = sum + tmp;
                tmp = 0;
                neg = 1;
            }
//            fseek(f_p1, -1, SEEK_CUR);
        } while ((ch = fgetc(f_p1)) != '\n');
        if (nums) {
            fprintf(f_p2, "%d\n", sum);
            nums = 0;
        }
        sum = 0;
    }

    printf("File saved");
    fclose(f_p1);
    fclose(f_p2);

    return 0;
}
