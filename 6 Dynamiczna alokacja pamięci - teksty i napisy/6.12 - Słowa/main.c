#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char **split_words(const char *text);
int sort_words(char **words);
void destroy(char **words);

int main() {
    char **words;
    char *txt = NULL, *tmp;
    char ch = 0;
    int i = 0, cnt = 0, flg = 0;

    tmp = realloc(txt, sizeof(char) * (i + 1));

    if (tmp == NULL) {
        printf("Failed to allocate memory");
        return 8;
    }

    printf("Enter text:\n");

    for (i = 1; i < 1000 && ch != '\n'; i++) {
        scanf("%c", &ch);

        if (tmp == NULL) {
            printf("Failed to allocate memory");
            free(txt);
            txt = NULL;
            return 8;
        }

        txt = tmp;
        if (ch != '\n') *(txt + (i - 1)) = ch;

        tmp = realloc(txt, sizeof(char) * (i + 1));
    }

    *(txt + i - 1) = '\0';
    i = 0;

    do {
        if ((*(txt + i) >= 'A' && *(txt + i) <= 'Z') || (*(txt + i) >= 'a' && *(txt + i) <= 'z')) {
            flg = 1;
        } else {
            if (flg) cnt++;
            flg = 0;
        }
    } while (*(txt + i++) != '\0');

    if (cnt == 0) {
        printf("Nothing to show");
        free(txt);
        txt = NULL;
        return 0;
    }

    words = split_words(txt);

    if (words == NULL) {
        printf("Failed to allocate memory");
        free(txt);
        txt = NULL;
        return 8;
    }

    sort_words(words);

    for (int k = 0; *(words + k) != NULL; k++) {
        for (int l = 0; *(*(words + k) + l) != '\0'; l++) {
            printf("%c", *(*(words + k) + l));
        }
        printf("\n");
    }

    free(txt);
    destroy(words);
    txt = NULL;
    return 0;
}

char **split_words(const char *text) {
    if (text == NULL) return NULL;

    int i = 0, cnt = 0, flg = 0, size = 0;

    do {
        if ((*(text + i) >= 'A' && *(text + i) <= 'Z') || (*(text + i) >= 'a' && *(text + i) <= 'z')) {
            flg = 1;
        } else {
            if (flg) cnt++;
            flg = 0;
        }
    } while (*(text + i++) != '\0');

    if (cnt == 0) return NULL;

    char **words = calloc(cnt + 1, sizeof(char *));
    if (words == NULL) return NULL;

    i = 0;
    cnt = 0;

    do {
        if ((*(text + i) >= 'A' && *(text + i) <= 'Z') || (*(text + i) >= 'a' && *(text + i) <= 'z')) {
            flg = 1;
            cnt++;
        } else {
            if (flg) {
                *(words + size) = calloc(cnt + 1, sizeof(char));
                if (*(words + size) == NULL) {
                    for (int j = 0; j < size; j++) {
                        free(*(words + j));
                    }
                    free(words);
                    words = NULL;
                    return NULL;
                }

                for (int j = 0; j < cnt; j++) {
                    *(*(words + size) + j) = *(text + (i - cnt) + j);
                }

                *(*(words + size) + cnt) = '\0';

                size++;
            }

            flg = 0;
            cnt = 0;
        }
    } while (*(text + i++) != '\0');

    return words;
}

int sort_words(char **words) {
    if (words == NULL) return 1;

    int size = 0;

    for (; *(words + size) != NULL; size++);

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (strcmp(*(words + j), *(words + j + 1)) > 0) {
                char *word = *(words + j);
                *(words + j) = *(words + j + 1);
                *(words + j + 1) = word;
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

