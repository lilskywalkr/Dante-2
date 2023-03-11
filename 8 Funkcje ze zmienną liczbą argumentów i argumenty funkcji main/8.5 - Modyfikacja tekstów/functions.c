#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <ctype.h>

#include "functions.h"


char* lower_to_upper(const char *in) {
    if (in == NULL) return NULL;

    int i = 0;
    char ch = 0;
    char *result = calloc((int) strlen(in) + 1, sizeof(char));
    if (result == NULL) return NULL;

    for (i = 0; i < (int) strlen(in); i++) {
        ch = *(in + i);
        if (ch >= 'a' && ch <= 'z') {
          ch = (char)(ch - 32);
        }
        *(result + i) = ch;
    }

    *(result + i) = '\0';

    return result;
}

char* upper_to_lower(const char *in) {
    if (in == NULL) return NULL;

    int i = 0;
    char ch = 0;
    char *result = calloc((int) strlen(in) + 1, sizeof(char));
    if (result == NULL) return NULL;

    for (i = 0; i < (int) strlen(in); i++) {
        ch = *(in + i);
        if (ch >= 'A' && ch <= 'Z') {
            ch = (char)(ch + 32);
        }
        *(result + i) = ch;
    }

    *(result + i) = '\0';

    return result;
}

char* space_to_dash(const char *in) {
    if (in == NULL) return NULL;

    int i = 0;
    char ch = 0;
    char *result = calloc((int) strlen(in) + 1, sizeof(char));
    if (result == NULL) return NULL;

    for (i = 0; i < (int) strlen(in); i++) {
        ch = *(in + i);
        if (ch == ' ') {
            ch = '_';
        }
        *(result + i) = ch;
    }

    *(result + i) = '\0';

    return result;
}

char* reverse_letter(const char *in) {
    if (in == NULL) return NULL;

    int i = 0;
    char ch = 0;
    char *result = calloc((int) strlen(in) + 1, sizeof(char));
    if (result == NULL) return NULL;

    for (i = 0; i < (int) strlen(in); i++) {
        ch = *(in + i);
        if (ch >= 'a' && ch <= 'z') {
            ch = (char)('z' - (ch - 'a'));
        } else if (ch >= 'A' && ch <= 'Z') {
            ch = (char)('Z' - (ch - 'A'));
        }
        *(result + i) = ch;
    }

    *(result + i) = '\0';

    return result;
}

void free_texts(char **text) {
    if (text != NULL) {
        for (int i = 0; *(text + i) != NULL; i++) {
            free(*(text + i));
        }
        free(text);
    }
}

char **text_modifier(const char *text, int number_of_functions, ...) {
    if (text == NULL || number_of_functions <= 0) return NULL;

    char **result = calloc(number_of_functions + 1, sizeof(char *));
    if (result == NULL) {
        return NULL;
    }

    *(result + number_of_functions) = NULL;

    va_list args;
    va_start(args, number_of_functions);

    for (int i = 0; i < number_of_functions; i++) {
        ptr_func function = va_arg(args, ptr_func);
        *(result + i) = function(text);

        if (*(result + i) == NULL) {
            free_texts(result);
            va_end(args);
            return NULL;
        }
    }

    va_end(args);
    return result;
}

void display(const char **text) {
    if (text != NULL) {
        for (int i = 0; *(text + i) != NULL; i++) {
            printf("%s\n", *(text + i));
        }
    }
}

