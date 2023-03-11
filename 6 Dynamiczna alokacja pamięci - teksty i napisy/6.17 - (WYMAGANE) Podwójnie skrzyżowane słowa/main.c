#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int create_leading_word_cross(const char *first, const char *second, char ***result);
int create_double_leading_word_cross(const char *first, const char *second, const char *third, const char *fourth, char ***result, char ***first_cross, char ***second_cross);

void destroy(char **words);
void display(char **words);

int main() {
    char **result;
    char **first_cross;
    char **second_cross;
    char *word1, *word2, *word3, *word4;
    int n = 0;

    word1 = calloc(11, sizeof(char));
    if (word1 == NULL) {
        printf("Failed to allocate memory");
        return 8;
    }

    word2 = calloc(11, sizeof(char));
    if (word1 == NULL) {
        free(word1);
        printf("Failed to allocate memory");
        return 8;
    }

    word3 = calloc(11, sizeof(char));
    if (word3 == NULL) {
        free(word1);
        free(word2);
        printf("Failed to allocate memory");
        return 8;
    }

    word4 = calloc(11, sizeof(char));
    if (word4 == NULL) {
        free(word1);
        free(word2);
        free(word3);
        printf("Failed to allocate memory");
        return 8;
    }

    printf("Enter words:");
    scanf("%10s %10s %10s %10s", word1, word2, word3, word4);

    n = create_double_leading_word_cross(word1, word2, word3, word4, &result, &first_cross, &second_cross);

    if (n == 2) {
        printf("Unable to make two crosses");
        free(word1);
        free(word2);
        free(word3);
        free(word4);
        return 0;
    } else if (n == 3) {
        printf("Failed to allocate memory");
        free(word1);
        free(word2);
        free(word3);
        free(word4);
        return 8;
    } else if (n == 1) {
        printf("Incorrect input");
        free(word1);
        free(word2);
        free(word3);
        free(word4);
        return 1;
    }

    display(first_cross);
    printf("\n");
    display(second_cross);
    printf("\n");
    display(result);

    free(word1);
    free(word2);
    free(word3);
    free(word4);
    destroy(first_cross);
    destroy(second_cross);
    destroy(result);
    return 0;
}

int create_leading_word_cross(const char *first, const char *second, char ***result) {
    if (first == NULL || second == NULL || result == NULL) return -1;

    int i = 0, j = 0, flg = 0, idx = 0, width = (int) strlen(second), height = (int) strlen(first);

    for (i = 0; i < height; i++) {
        if (*(first + i) < 'A' || *(first + i) > 'Z') return -1;
    }

    for (i = 0; i < width; i++) {
        if (*(second + i) < 'A' || *(second + i) > 'Z') return -1;
    }

    for (i = 0; i < width; i++) {
        for (j = 0; j < height; j++) {
            if (*(second + i) == *(first + j)) {
                idx = j;
                flg = 1;
                break;
            }
        }

        if (flg) break;
    }

    if (!flg) {
        *result = NULL;
        return -2;
    }

    *result = calloc(height + 1, sizeof(char *));

    if (*result == NULL) {
        return -3;
    }

    *(*result + height) = NULL;

    for (int x = 0; x < height; x++) {
        if (x != j) {
            *(*result + x) = calloc(i + 2, sizeof(char));

            if (*(*result + x) == NULL) {
                for (int k = 0; k < x; k++) {
                    free(*(*result + k));
                }
                free(*result);
                *result = NULL;
                return -3;
            }
        } else {
            *(*result + x) = calloc(width + 1, sizeof(char));

            if (*(*result + x) == NULL) {
                for (int k = 0; k < x; k++) {
                    free(*(*result + k));
                }
                free(*result);
                *result = NULL;
                return -3;
            }
        }
    }

    for (int x = 0; x < height; x++) {
        if (x != j) {
            for (int y = 0; y < i; y++) {
                *(*(*result + x) + y) = ' ';
            }

            *(*(*result + x) + i) = *first++;
            *(*(*result + x) + i + 1) = '\0';
        } else {
            for (int y = 0; y < width; y++) {
                *(*(*result + x) + y) = *(second + y);
            }

            *(*(*result + x) + width) = '\0';
            first++;
        }
    }

    return idx;
}

int max(int a, int b) {
    return (a > b ? a : b);
}

int create_double_leading_word_cross(const char *first, const char *second, const char *third, const char *fourth, char ***result, char ***first_cross, char ***second_cross) {
    if (first == NULL || second == NULL || third == NULL || fourth == NULL || result == NULL || first_cross == NULL || second_cross == NULL) return 1;

    int flg = 0, size1 = 0, size2 = 0, row_size1 = 0, row_size2 = 0, height = 0, crossing_row = 0, row_first_cross = 0, row_second_cross = 0, col_first_cross = 0, col_second_cross = 0, space = 3;

    row_first_cross = create_leading_word_cross(second, first, first_cross);

    if (row_first_cross < 0) {
        *result = NULL;
        return row_first_cross * -1;
    }

    row_second_cross = create_leading_word_cross(fourth, third, second_cross);

    if (row_second_cross < 0) {
        *result = NULL;
        destroy(*first_cross);
        return row_second_cross * -1;
    }

    row_size1 = (int) strlen(first);
    row_size2 = (int) strlen(third);
    size1 = (int) strlen(second);
    size2 = (int) strlen(fourth);

    crossing_row = (row_first_cross > row_second_cross ? row_first_cross : row_second_cross);
    height = crossing_row + (size1 - row_first_cross > size2 - row_second_cross ? size1 - row_first_cross : size2 - row_second_cross);

    *result = calloc(height + 1, sizeof(char *));

    if (*result == NULL) {
        destroy(*first_cross);
        destroy(*second_cross);
        return 3;
    }

    *(*result + height) = NULL;

    for (int i = 0; *(first + i) != '\0'; i++) {
        for (int j = 0; *(second + j) != '\0'; j++) {
            if (*(first + i) == *(second + j)) {
                col_first_cross = i;
                flg = 1;
                break;
            }
        }

        if (flg) {
            flg = 0;
            break;
        }
    }

    for (int i = 0; *(third + i) != '\0'; i++) {
        for (int j = 0; *(fourth + j) != '\0'; j++) {
            if (*(third + i) == *(fourth + j)) {
                col_second_cross = i;
                flg = 1;
                break;
            }
        }

        if (flg) {
            flg = 0;
            break;
        }
    }

    for (int i = 0, j = 0/*, second_word_cnt = 0*/; i < height; i++) {
        if (i == crossing_row) {
            *(*result + i) = calloc(row_size1 + space + row_size2 + 1, sizeof(char));

            if (*(*result + i) == NULL) {
                destroy(*result);
                *result = NULL;
                destroy(*first_cross);
                destroy(*second_cross);
                return 3;
            }
        } else {
            if (row_first_cross <= row_second_cross && i < crossing_row) {
                *(*result + i) = calloc(row_size1 + space + col_second_cross + 1 + 1, sizeof(char));

                if (*(*result + i) == NULL) {
                    destroy(*result);
                    *result = NULL;
                    destroy(*first_cross);
                    destroy(*second_cross);
                    return 3;
                }
            } else if (row_first_cross > row_second_cross && i < crossing_row) {
                if (i < abs(row_first_cross - row_second_cross)) {
                    *(*result + i) = calloc(col_first_cross + 1 + 1, sizeof(char));

                    if (*(*result + i) == NULL) {
                        destroy(*result);
                        *result = NULL;
                        destroy(*first_cross);
                        destroy(*second_cross);
                        return 3;
                    }
                } else {
                    *(*result + i) = calloc(row_size1 + space + col_second_cross + 1 + 1, sizeof(char));

                    if (*(*result + i) == NULL) {
                        destroy(*result);
                        *result = NULL;
                        destroy(*first_cross);
                        destroy(*second_cross);
                        return 3;
                    }
                }
            }

            if (size1 - row_first_cross > size2 - row_second_cross && i > crossing_row) {
                if (j <= (size2 - (row_second_cross + 1)) - 1) {
                    *(*result + i) = calloc(row_size1 + space + col_second_cross + 1 + 1, sizeof(char));

                    if (*(*result + i) == NULL) {
                        destroy(*result);
                        *result = NULL;
                        destroy(*first_cross);
                        destroy(*second_cross);
                        return 3;
                    }
                    j += 1;
                } else {
                    *(*result + i) = calloc(col_first_cross + 1 + 1, sizeof(char));

                    if (*(*result + i) == NULL) {
                        destroy(*result);
                        *result = NULL;
                        destroy(*first_cross);
                        destroy(*second_cross);
                        return 3;
                    }
                }
            } else if (size1 - row_first_cross <= size2 - row_second_cross && i > crossing_row) {
                *(*result + i) = calloc(row_size1 + space + col_second_cross + 1 + 1, sizeof(char));

                if (*(*result + i) == NULL) {
                    destroy(*result);
                    *result = NULL;
                    destroy(*first_cross);
                    destroy(*second_cross);
                    return 3;
                }
            }
        }
    }

    for (int i = 0, j = 0, k = 0, l = 0, m = 0/*, one_side_letters = 0,second_word_cnt = 0*/; i < height; i++) {
        if (i == crossing_row) {
            strcpy(*(*result + i), *(*first_cross + row_first_cross));
            strcat(*(*result + i), "   ");
            strcat(*(*result + i), *(*second_cross + row_second_cross));
        } else {
            if (row_first_cross <= row_second_cross && i < crossing_row) {
                if (i < abs(row_first_cross - row_second_cross)) {
                    for (k = 0; k < row_size1 + space + col_second_cross; k++) {
                        *(*(*result + i) + k) = ' ';
                    }
                    *(*(*result + i) + k) = *(*(*second_cross + i) + col_second_cross);
                    *(*(*result + i) + k + 1) = '\0';
                } else {
                    for (k = 0; k < col_first_cross; k++) {
                        *(*(*result + i) + k) = ' ';
                    }
                    *(*(*result + i) + k) = *(*(*first_cross + j) + col_first_cross);
                    for (k += 1, l = 0; l < (row_size1 - (col_first_cross + 1)) + space + col_second_cross; l++, k++) {
                        *(*(*result + i) + k) = ' ';
                    }
                    *(*(*result + i) + k) = *(*(*second_cross + i) + col_second_cross);
                    *(*(*result + i) + k + 1) = '\0';

                    j += 1;
                }
            } else if (row_first_cross > row_second_cross && i < crossing_row) {
                if (i < abs(row_first_cross - row_second_cross)) {
                    for (k = 0; k < col_first_cross; k++) {
                        *(*(*result + i) + k) = ' ';
                    }
                    *(*(*result + i) + k) = *(*(*first_cross + i) + col_first_cross);
                    *(*(*result + i) + k + 1) = '\0';
                } else {
                    for (k = 0; k < col_first_cross; k++) {
                        *(*(*result + i) + k) = ' ';
                    }
                    *(*(*result + i) + k) = *(*(*first_cross + i) + col_first_cross);
                    for (k += 1, l = 0; l < (row_size1 - (col_first_cross + 1)) + space + col_second_cross; l++, k++) {
                        *(*(*result + i) + k) = ' ';
                    }
                    *(*(*result + i) + k) = *(*(*second_cross + j) + col_second_cross);
                    *(*(*result + i) + k + 1) = '\0';

                    j += 1;
                }
            }

            if (size1 - row_first_cross > size2 - row_second_cross && i > crossing_row) {
                if (m <= (size2 - (row_second_cross + 1)) - 1) {
                    m += 1;
                    for (k = 0; k < col_first_cross; k++) {
                        *(*(*result + i) + k) = ' ';
                    }
                    *(*(*result + i) + k) = *(*(*first_cross + row_first_cross + m) + col_first_cross);
                    for (k += 1, l = 0; l < (row_size1 - (col_first_cross + 1)) + space + col_second_cross; l++, k++) {
                        *(*(*result + i) + k) = ' ';
                    }
                    *(*(*result + i) + k) = *(*(*second_cross + row_second_cross + m) + col_second_cross);
                    *(*(*result + i) + k + 1) =  '\0';
                } else {
                    if (!flg) {
                        m += 1;
                        flg = 1;
                    }
                    for (k = 0; k < col_first_cross; k++) {
                        *(*(*result + i) + k) = ' ';
                    }
                    *(*(*result + i) + k) = *(*(*first_cross + row_first_cross + m) + col_first_cross);
                    *(*(*result + i) + k + 1) = '\0';
                    m += 1;
                }
            } else if (size1 - row_first_cross <= size2 - row_second_cross && i > crossing_row) {
                if (m <= (size1 - (row_first_cross + 1)) - 1) {
                    m += 1;
                    for (k = 0; k < col_first_cross; k++) {
                        *(*(*result + i) + k) = ' ';
                    }
                    *(*(*result + i) + k) = *(*(*first_cross + row_first_cross + m) + col_first_cross);
                    for (k += 1, l = 0; l < (row_size1 - (col_first_cross + 1)) + space + col_second_cross; l++, k++) {
                        *(*(*result + i) + k) = ' ';
                    }
                    *(*(*result + i) + k) = *(*(*second_cross + row_second_cross + m) + col_second_cross);
                    *(*(*result + i) + k + 1) =  '\0';
                } else {
                    if (!flg) {
                        m += 1;
                        flg = 1;
                    }
                    for (k = 0; k < row_size1 + space + col_second_cross; k++) {
                        *(*(*result + i) + k) = ' ';
                    }
                    *(*(*result + i) + k) = *(*(*second_cross + row_second_cross + m) + col_second_cross);
                    *(*(*result + i) + k + 1) = '\0';
                    m += 1;
                }
            }
        }
    }

    return 0;
}

void destroy(char **words) {
    if (words != NULL) {
        for (int i = 0; *(words + i) != NULL; i++) {
            free(*(words + i));
        }

        free(words);
        words = NULL;
    }
}

void display(char **words) {
    if (words != NULL) {
        for (int i = 0; *(words + i) != NULL; i++) {
            for (int j = 0; *(*(words + i) + j) != '\0'; j++) {
                printf("%c", *(*(words + i) + j));
            }
            printf("\n");
        }
    }
}

