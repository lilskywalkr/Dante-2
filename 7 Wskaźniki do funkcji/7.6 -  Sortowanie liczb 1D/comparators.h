//
// Created by ronnie on 31.03.2022.
//

#ifndef UNTITLED_COMPARATORS_H
#define UNTITLED_COMPARATORS_H

typedef int (*ptr_func) (int, int);

int comp_int(int a, int b);
int comp_int_abs(int a, int b);
int comp_int_length(int a, int b);
int comp_int_digits_sum(int a, int b);
int dig_len (int a);
int sum_of_digits(int number);
void display_array(const int *tab, int size);

int sort_int(int *tab, int size, ptr_func function);

#endif //UNTITLED_COMPARATORS_H
