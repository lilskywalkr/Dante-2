#include <stdio.h>
#include "tested_declarations.h"
#include "rdebug.h"

int file_size_from_path(const char *path);
int file_size_from_file(FILE *f);

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

    int size_p = file_size_from_path(f_name_p);
    int size_f = file_size_from_file(f_p);

    if (size_p == size_f) printf("%d", size_f);
    else {
        printf("Couldn't open file");
        fclose(f_p);
        return 4;
    }

    fclose(f_p);
    return 0;
}

int file_size_from_path(const char *path) {
    if (path == NULL) return -2;

    FILE *f_p = fopen(path, "r");

    if (f_p == NULL) return -1;

    fseek(f_p, 0, SEEK_END);
    int f_size = ftell(f_p);
    fclose(f_p);
    return f_size;
}

int file_size_from_file(FILE *f) {
    if (f == NULL) return -2;
    else {
        int init = ftell(f);
        fseek(f, 0, SEEK_END);
        int f_size = ftell(f);
        fseek(f, init, SEEK_SET);
        return f_size;
    }
}
