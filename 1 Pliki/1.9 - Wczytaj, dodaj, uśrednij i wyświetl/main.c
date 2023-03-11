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

    int init_len = 0, len = 0, tmp = 0, init_line = 0, n = 0;
    fscanf(f_p, "%d", &init_len);
    init_line = ftell(f_p);
    while ((n = fscanf(f_p, "%d", &tmp)) != EOF) {
        if (!n) {
            printf("File corrupted");
            fclose(f_p);
            return 6;
        }
        len++;
    }
    if (len < init_len || !len || init_len <= 0) {
        printf("File corrupted");
        fclose(f_p);
        return 6;
    }

    fseek(f_p, init_line, SEEK_SET);

    int num = 0, sum = 0;
    float avg = 0.0f;
    len = 0;
    while ((n = fscanf(f_p, "%d", &num)) != EOF && len < init_len) {
        if (!n) {
            printf("File corrupted");
            fclose(f_p);
            return 6;
        }
        len++;
        sum += num;
    }

    avg += (float)sum / (float)init_len;
    printf("Suma liczb: %d\nSrednia: %f", sum, avg);
    fclose(f_p);


    return 0;
}
