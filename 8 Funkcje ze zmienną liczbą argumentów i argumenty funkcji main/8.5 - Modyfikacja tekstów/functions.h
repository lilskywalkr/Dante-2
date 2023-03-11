//
// Created by root on 3/20/22.
//

#ifndef EMPTY_PROJECT_FUNCTIONS_H
#define EMPTY_PROJECT_FUNCTIONS_H

typedef char* (*ptr_func)(const char *in);

char* lower_to_upper(const char *in);
char* upper_to_lower(const char *in);
char* space_to_dash(const char *in);
char* reverse_letter(const char *in);

void free_texts(char **text);

char **text_modifier(const char *text, int number_of_functions, ...);
void display(const char **text);

#endif //EMPTY_PROJECT_FUNCTIONS_H
