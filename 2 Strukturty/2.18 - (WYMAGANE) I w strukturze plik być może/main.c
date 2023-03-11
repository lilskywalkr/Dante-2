#include <stdio.h>
#include <math.h>
#include <limits.h>
#include "tested_declarations.h"
#include "rdebug.h"

struct file_t {
    FILE *f;
    int size;
};

int open_file(struct file_t* f, const char *filename);
struct file_t* find_min(const struct file_t* files, int size);
void close_file(struct file_t* f);

int main() {
    struct file_t files[20];
    struct  file_t *files_p = (void *)&files;
    int i = 0, flg = 0;
    char filename[1000];
    char *f_name = (void *)&filename;

    printf("Podaj nazwy plikow:\n");
    do {
        scanf("%999[^\n]", f_name);
        while (getchar() != '\n');

        flg = (*f_name == '\0' ? 0 : 1);
        if (i < 5 && !open_file(files_p + i, f_name)) i += 1;
        *f_name = '\0';
    } while (flg);

    if (!i) {
        printf("Couldn't open file");
        return 4;
    }

    printf("Podaj teksty:\n");
    do {
        scanf("%999[^\n]", f_name);
        while (getchar() != '\n');

        flg = (*f_name == '\0' ? 0 : 1);

        if (flg) {
            fprintf(find_min(files_p, i) -> f, "%s\n", f_name);
            find_min(files_p, i) -> size = (int)ftell(find_min(files_p, i) -> f);
        }

        *f_name = '\0';
    } while (flg);

    printf("Files saved");

    for (int j = 0; j < i; j++) close_file(files_p + j);

    return 0;
}

int open_file(struct file_t* f, const char *filename) {
    if (f == NULL || filename == NULL) return 1;

    f -> f = fopen(filename, "r+");
    int size = 0;

    if (f -> f == NULL) {
        f -> f = fopen(filename, "w+");
        if (f -> f == NULL) return 2;
        f -> size = size;
        return 0;
    }

    fseek(f -> f, 0, SEEK_END);
    size = (int)ftell(f -> f);
    f -> size = size;

    return 0;
}

struct file_t* find_min(const struct file_t* files, int size) {
    if (files == NULL || size <= 0) return NULL;

    int min = INT_MAX, idx = 0;

    for (int i = 0; i < size; i++) {
        if ( ((files + i)) -> size < min ) {
            min = ((files + i)) -> size;
            idx = i;
        }
    }

    return (struct file_t*) (files + idx);
}

void close_file(struct file_t* f) {
    if (f != NULL && f -> f != NULL) fclose(f -> f);
}
