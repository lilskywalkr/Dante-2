//
// Created by ronnie on 31.03.2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "char_operations.h"

char lower_to_upper(char ch) {
    if (ch >= 'a' && ch <= 'z') {
        ch = (char)(ch - 32);
    }
    return ch;
}
char upper_to_lower(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        ch = (char)(ch + 32);
    }
    return ch;
}
char space_to_dash(char ch) {
    if (ch == ' ') {
        ch = '_';
    }
    return ch;
}
char reverse_letter(char ch) {
    if (ch >= 'a' && ch <= 'z') {
        ch = (char)('z' - (ch - 'a'));
    } else if (ch >= 'A' && ch <= 'Z') {
        ch = (char)('Z' - (ch - 'A'));
    }
    return ch;
}

char* letter_modifier(const char* input_text, ptr_func function) {
    if (input_text == NULL || (function != lower_to_upper && function != upper_to_lower && function != space_to_dash && function != reverse_letter)) {
        return NULL;
    }

    int i = 0;
    char *txt = calloc((int) strlen(input_text) + 1, sizeof(char));

    if (txt == NULL) {
        return NULL;
    }

    for (i = 0; i < (int) strlen(input_text); i++) {
        if (function == lower_to_upper) {
            *(txt + i) = lower_to_upper(*(input_text + i));
        } else if (function == upper_to_lower) {
            *(txt + i) = upper_to_lower(*(input_text + i));
        } else if (function == space_to_dash) {
            *(txt + i) = space_to_dash(*(input_text + i));
        } else {
            *(txt + i) = reverse_letter(*(input_text + i));
        }
    }

    *(txt + i) = '\0';

    return txt;
}

