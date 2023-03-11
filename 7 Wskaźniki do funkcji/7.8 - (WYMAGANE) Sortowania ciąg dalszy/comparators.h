//
// Created by ronnie on 31.03.2022.
//

#ifndef UNTITLED_COMPARATORS_H
#define UNTITLED_COMPARATORS_H

struct point_t {
    double x;
    double y;
};

typedef int (*ptr_func) (const void*, const void*);

int comp_int(const void *ptr1, const void *ptr2);
int comp_double(const void *ptr1, const void *ptr2);
int comp_point(const void *ptr1, const void *ptr2);

int sort(void *tab, int width, int t_size, ptr_func function);

#endif //UNTITLED_COMPARATORS_H
