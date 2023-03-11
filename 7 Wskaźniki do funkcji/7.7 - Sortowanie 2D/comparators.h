//
// Created by ronnie on 31.03.2022.
//

#ifndef UNTITLED_COMPARATORS_H
#define UNTITLED_COMPARATORS_H

typedef int (*ptr_func) (const int*, const int*, int);

int comp_min(const int *ptr1, const int *ptr2, int width);
int comp_max(const int *ptr1, const int *ptr2, int width);
int comp_sum(const int *ptr1, const int *ptr2, int width);

int sort_rows(int **tab, int width, int height, ptr_func function);

#endif //UNTITLED_COMPARATORS_H
