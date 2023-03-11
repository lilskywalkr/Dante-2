#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

struct point_t {
    int x;
    int y;
};

int my_printf(char *input, ...);
int my_scanf(char *input, ...);
int digit_number(int a);

int main() {

    //struct point_t a;
    double a;
    int n = my_scanf("%f", &a);

    my_printf("%f, number of elements got: %d", a, n);

    return 0;
}

int my_printf(char *input, ...) {
    if (input == NULL) return 0;

    va_list args;
    va_start(args, input);

    int decimal_number = 0;
    double floating_point_number = 0;
    struct point_t point;

    int number_of_characters = 0;

    for (int i = 0; *(input + i) != '\0'; i++) {
        if (*(input + i) == '%' && *(input + i + 1) == 'd') {
            decimal_number = va_arg(args, int);

            int decimal_number_length = digit_number(decimal_number);
            number_of_characters += decimal_number_length;

            if (decimal_number < 0) {
                putchar('-');
                number_of_characters += 1;
                decimal_number *= -1;
            }

            for (int j = 0; j < decimal_number_length; j++) {
                int digit = decimal_number / pow(10, decimal_number_length - j - 1);
                putchar((digit % 10) + '0');
            }
            i += 1;
        } else if (*(input + i) == '%' && *(input + i + 1) == 'f') {
            floating_point_number = va_arg(args, double);

            int floating_point_number_length_before_dot = digit_number((int)floating_point_number);
            number_of_characters += floating_point_number_length_before_dot;

            if (floating_point_number < 0) {
                putchar('-');
                number_of_characters += 1;
                floating_point_number *= -1;

            }

            for (int j = 0; j < floating_point_number_length_before_dot; j++) {
                int digit = floating_point_number / pow(10, floating_point_number_length_before_dot - j - 1);
                putchar((digit % 10) + '0');
            }

            putchar('.');
            number_of_characters += 1;

            for (int j = 0; j < 5; j++) {
                long long digit = (long long)(floating_point_number * pow(10, j + 1));
                putchar((digit % 10) + '0');
                number_of_characters += 1;
            }

            i += 1;
        } else if (*(input + i) == '%' && *(input + i + 1) == 'p') {
            point = va_arg(args, struct point_t);
            int point_x = point.x;
            int point_y = point.y;

            number_of_characters += digit_number(point_x);
            number_of_characters += digit_number(point_y);

            putchar('(');
            number_of_characters += 1;

            if (point_x < 0) {
                putchar('-');
                point_x *= -1;
                number_of_characters += 1;
            }

            for (int j = 0; j < digit_number(point_x); j++) {
                int digit = point_x / pow(10, digit_number(point_x) - j - 1);
                putchar((digit % 10) + '0');
            }

            putchar(' ');
            number_of_characters += 1;

            if (point_y < 0) {
                putchar('-');
                point_y *= -1;
                number_of_characters += 1;
            }

            for (int j = 0; j < digit_number(point_y); j++) {
                int digit = point_y / pow(10, digit_number(point_y) - j - 1);
                putchar((digit % 10) + '0');
            }

            putchar(')');
            number_of_characters += 1;

            i += 1;
        } else if (*(input + i) == '%' && *(input + i + 1) == 's') {
            char *string = va_arg(args, char *);
            int string_length = (int) strlen(string);
            number_of_characters += string_length;

            for (int j = 0; j < string_length; j++) putchar(*(string + j));

            i += 1;
        } else {
            char ch = *(input + i);
            number_of_characters += 1;
            putchar(ch);
        }
    }

    va_end(args);
    return number_of_characters;
}

int my_scanf(char *input, ...) {
    if (input == NULL) return 0;

    int number_of_elements = 0;

    va_list args;
    va_start(args, input);

    for (int i = 0; *(input + i) != '\0'; i++) {
        if (*(input + i) == '%' && *(input + i + 1) == 'd') {
            int *decimal_number = va_arg(args, int *), digit = 0, flg = 0, j = 0;
            *decimal_number = 0;
            char ch = 0;

            do {
                ch = (char)getchar();
                if (isdigit(ch)) {
                    *decimal_number *= 10;
                    digit = ch - '0';
                    *decimal_number += digit;
                    j += 1;
                } else if (ch == '-' && j == 0) {
                    flg = 1;
                    j += 1;
                }
            } while (isdigit(ch) || (ch == '-' && j == 1));

            if (j == 0)  {
                number_of_elements = 0;
            } else {
                if (flg) {
                    *decimal_number *= -1;
                }
                number_of_elements += 1;
            }

            i += 1;
        } else if (*(input + i) == '%' && *(input + i + 1) == 'p') {
            struct point_t *point = va_arg(args, struct point_t *);
            int *point_x = (int *)&point->x;
            int *point_y = (int *)&point->y;

            *point_x = 0, *point_y = 0;

            int digit = 0, flg = 0, j = 0;
            char ch = 0;

            do {
                ch = (char)getchar();
                if (isdigit(ch)) {
                    *point_x *= 10;
                    digit = ch - '0';
                    *point_x += digit;
                    j += 1;
                } else if (ch == '-' && j == 1) {
                    flg = 1;
                    j += 1;
                } else if (ch == '(' && j == 0) {
                    j += 1;
                }
            } while (isdigit(ch) || (ch == '-' && j == 2) || (ch ==  '(' && j == 1));

            if (j == 0)  {
                number_of_elements = 0;
            } else {
                if (flg) {
                    *point_x *= -1;
                }
                if (ch != ' ') {
                    number_of_elements = 0;
                    return number_of_elements;
                }
                number_of_elements += 1;
            }

            j = 0, digit = 0, ch = 0, flg = 0;

            do {
                ch = (char)getchar();
                if (isdigit(ch)) {
                    *point_y *= 10;
                    digit = ch - '0';
                    *point_y += digit;
                    j += 1;
                } else if (ch == '-' && j == 0) {
                    flg = 1;
                    j += 1;
                } else if (ch == ')' && j != 1) {
                    j += 1;
                }
            } while (isdigit(ch) || (ch == '-' && j == 1) || (ch ==  ')' && j != 1));

            if (j) {
                if (flg) {
                    *point_y *= -1;
                }
                number_of_elements += 1;
            }

            i += 1;
        } else if (*(input + i) == '%' && *(input + i + 1) == 'f') {
            double *floating_point_number = va_arg(args, double *);
            *floating_point_number = 0.0;

            char ch = 0;
            int digit = 0, flg = 0, j = 0, p = 0;

            do {
                ch = (char)getchar();
                if (isdigit(ch)) {
                    *floating_point_number *= 10.0;
                    digit = ch - '0';
                    *floating_point_number += (double)digit;
                    j += 1;
                } else if (ch == '-' && j == 0) {
                    flg = 1;
                    j += 1;
                } else if (ch == '.' && j > 1) {
                    j += 1;
                    break;
                }
            } while (isdigit(ch) || (ch == '-' && j == 1) || (ch == '.' && j > 1));

            if (j == 0)  {
                number_of_elements = 0;
            } else {
                number_of_elements += 1;
            }

            ch = 0, digit = 0, j = 0;
            do {
                ch = (char) getchar();
                if (isdigit(ch)) {
                    *floating_point_number *= 10;
                    *floating_point_number += (double)(ch - '0');
                    j += 1;
                    p += 1;
                }
            } while (isdigit(ch));

            if (flg) {
                *floating_point_number *= -1;
            }

            *floating_point_number /= (double) pow(10.0, p);

            i += 1;
        }
    }

    return number_of_elements;
}

int digit_number(int a) {
    if (a == 0) return 1;
    int num = 0;
    while (a != 0) {
        num += 1;
        a = a / 10;
    }
    return num;
}


