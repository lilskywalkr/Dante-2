#include <stdio.h>
#include "tested_declarations.h"
#include "rdebug.h"

int read_file(const char *filename) {
    if (filename == NULL) {
        return -1;
    }

    char nazwa_zmiennej[31] = {0};
    char *file_name_p = (void *)&nazwa_zmiennej;
    int cnt = 1;
    FILE *f1_p, *f2_p;

    f1_p = fopen(filename, "r");

    if (f1_p == NULL) {
        return 0;
    }

    while (fscanf(f1_p, "%30[^\n] ", file_name_p) != EOF) {
        f2_p = fopen(file_name_p, "r");
        printf("%s\n", file_name_p);
        if (f2_p != NULL) {
            fclose(f2_p);
            cnt += read_file(file_name_p);
        }
    }

    fclose(f1_p);
    return cnt;
}

int main() {
    char nazwa_zmiennej[31] = {0};
    char *file_name_p = (void *)&nazwa_zmiennej;
    int n = 0;

    printf("Podaj sciezke do pliku:\n");
    scanf("%30[^\n]", file_name_p);

    if (!(n = read_file(file_name_p))) {
        printf("Couldn't open file");
        return 4;
    }

    printf("%d", n);

    return 0;
}
