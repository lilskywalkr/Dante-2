#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdarg.h>
#include <string.h>

int* count_words(const char *filename, int *err_code, int N, ...);

int main(int N, char **argv) {
    int err_code = 0, *arr;

    if (N < 3) {
        printf("Not enough arguments");
        return 9;
    }

    for (int i = 2; i < N; i++) {
        arr = count_words(*(argv + 1), &err_code, 1, *(argv + i));

        if (err_code == 2) {
            printf("Couldn't open file");
            return 4;
        } else if (err_code == 3) {
            printf("Failed to allocate memory");
            return 8;
        }

        printf("%d\n", *(arr + 0));
        free(arr);
    }
    
    return 0;
}

int* count_words(const char *filename, int *err_code, int N, ...) {
    if (filename == NULL || N <= 0) {
        if (err_code != NULL) {
            *err_code = 1;
        }
        return NULL;
    }

    va_list args;
    va_start(args, N);

    char ch = 0, *word = "";
    int number_of_words = 0, flg = 0, j = 0, cnt = 0, verified = 0, init = 0;

    FILE *f_p = fopen(filename, "r");
    if (f_p == NULL) {
        if (err_code != NULL) {
            *err_code = 2;
        }
        va_end(args);
        return NULL;
    }

    int *arr = calloc(N, sizeof(int));
    if (arr == NULL) {
        if (err_code != NULL) {
            *err_code = 3;
        }
        fclose(f_p);
        return NULL;
    }

    for (int i = 0; i < N; i++) {
        fseek(f_p, 0, SEEK_SET), word = va_arg(args, char *), flg = 0, number_of_words = 0, verified = 0, cnt = 0, j = 0;

        while (!feof(f_p)) {
            ch = (char) fgetc(f_p);
            cnt += 1;

            if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
                flg = 1;
                j += 1;
            } else {
                if (flg) {
                    init = (int) ftell(f_p);
                    if (j == (int) strlen(word)) {
                        fseek(f_p, ftell(f_p) - j - 1, SEEK_SET);
                        for (int k = 0; k < j; k++) {
                            ch = (char) fgetc(f_p);
                            if (ch == *(word + k)) {
                                verified = 1;
                            } else {
                                verified = 0;
                                fseek(f_p, init, SEEK_SET);
                                break;
                            }
                        }
                    }

                    if (verified) {
                        number_of_words += 1;
                    }
                }

                verified = 0;
                flg = 0;
                j = 0;
            }
        }
        *(arr + i) = number_of_words;
    }


    if (err_code != NULL) {
        *err_code = 0;
    }

    va_end(args);
    fclose(f_p);
    return arr;
}


