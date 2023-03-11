#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "dictionary.h"

int main() {
    struct dictionary_t *d;
    char *filename = calloc(40, sizeof(char)), *word;
    int err_code = 0, choice = 0, N = 0, flg = 0, i = 0, cnt = 0;
    FILE *f_p;

    if (filename == NULL) {
        printf("Failed to allocate memory");
        return 8;
    }

    printf("Podaj nazwe pliku:");
    scanf("%39s", filename);

    printf("Co chcesz zrobic:");

    if (scanf("%d", &choice) != 1) {
        printf("Incorrect input");
        free(filename);
        return 1;
    }

    if (choice != 0 && choice != 1) {
        printf("Incorrect input data");
        free(filename);
        return 2;
    }

    switch (choice) {
        case 0:
            d = load_dictionary_b(filename, &err_code);

            if (err_code == 1 || err_code == 2) {
                printf("Couldn't open file");
                free(filename);
                return 4;
            } else if (err_code == 3) {
                printf("File corrupted");
                free(filename);
                return 6;
            } else if (err_code == 4) {
                printf("Failed to allocate memory");
                free(filename);
                return 8;
            }

            break;
        case 1:
            f_p = fopen(filename, "r+");

            if (f_p == NULL) {
                printf("Couldn't open file");
                free(filename);
                return 4;
            }

            while(!feof(f_p)) {
                int ch = fgetc(f_p);

                if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
                    flg = 1;
                } else {
                    if (flg) N++;
                    flg = 0;
                }
            }

            d = create_dictionary(N, &err_code);

            if (err_code == 1) {
                printf("File corrupted");
                free(filename);
                fclose(f_p);
                return 6;
            } else if (err_code == 2) {
                printf("Failed to allocate memory");
                free(filename);
                fclose(f_p);
                return 8;
            }

            fprintf(f_p, "%c ", fgetc(f_p));

            flg = 0;
            fseek(f_p, 0, SEEK_SET);

            while(!feof(f_p)) {
                int ch = fgetc(f_p);

                if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
                    flg = 1;
                    cnt++;
                } else {
                    if (flg && ch != EOF) {
                        i = ((int) ftell(f_p) - cnt) - 1;
                        fseek(f_p, i, SEEK_SET);

                        word = calloc(cnt + 1, sizeof(char));

                        for (int k = 0; k < cnt; k++) {
                            ch = fgetc(f_p);
                            *(word + k) = (char)ch;
                        }

                        err_code = dictionary_add_word(d, word);

                        if (err_code == 2) {
                            printf("Failed to allocate memory");
                            free(filename);
                            free(word);
                            fclose(f_p);
                            destroy_dictionary(&d);
                            return 8;
                        }
                    }

                    free(word);
                    word = NULL;
                    flg = 0;
                    cnt = 0;
                }
            }

            fclose(f_p);
            break;
        default:
            printf("Incorrect input data");
            free(filename);
            return 2;
    }

    char ch1 = *(filename+ (int) strlen(filename) - 1);
    char ch2 = *(filename + (int) strlen(filename) - 2);
    char ch3 = *(filename + (int) strlen(filename) - 3);
    char *suffix_alpha = "_alpha.";
    char *suffix_occ = "_occ.";

    char *new_filename1 = calloc(40, sizeof(char));
    if (new_filename1 == NULL) {
        printf("Failed to allocate memory");
        free(filename);
        destroy_dictionary(&d);
        return 8;
    }

    for (int j = 0; j < (int)strlen(filename) - 4; j++) {
        *(new_filename1 + j) = *(filename + j);
    }

    strcat(new_filename1, suffix_alpha);
    *(new_filename1 + strlen(new_filename1)) = ch3;
    *(new_filename1 + strlen(new_filename1)) = ch2;
    *(new_filename1 + strlen(new_filename1)) = ch1;
    dictionary_sort_alphabetically(d);

    err_code = save_dictionary_b(d, new_filename1);

    if (err_code == 1 || err_code == 2) {
        printf("Couldn't create file\n");
    } else {
        printf("File saved\n");
    }

    char *new_filename2 = calloc(40, sizeof(char));
    if (new_filename2 == NULL) {
        printf("Failed to allocate memory");
        free(filename);
        free(new_filename1);
        destroy_dictionary(&d);
        return 8;
    }

    for (int j = 0; j < (int)strlen(filename) - 4; j++) {
        *(new_filename2 + j) = *(filename + j);
    }

    strcat(new_filename2, suffix_occ);
    *(new_filename2 + strlen(new_filename2)) = ch3;
    *(new_filename2 + strlen(new_filename2)) = ch2;
    *(new_filename2 + strlen(new_filename2)) = ch1;
    dictionary_sort_occurence(d);

    err_code = save_dictionary_b(d, new_filename2);

    if (err_code == 1 || err_code == 2) {
        printf("Couldn't create file\n");
    } else {
        printf("File saved\n");
    }

    free(new_filename1);
    free(new_filename2);
    free(filename);
    destroy_dictionary(&d);
    return 0;
}

