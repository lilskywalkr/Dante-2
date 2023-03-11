//
// Created by ronnie on 31.03.2022.
//

#ifndef UNTITLED_CHAR_OPERATIONS_H
#define UNTITLED_CHAR_OPERATIONS_H

typedef char (*ptr_func) (char);

char lower_to_upper(char ch);
char upper_to_lower(char ch);
char space_to_dash(char ch);
char reverse_letter(char ch);

char* letter_modifier(const char* input_text, ptr_func function);

#endif //UNTITLED_CHAR_OPERATIONS_H
