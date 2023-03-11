//
// Created by ronnie on 31.03.2022.
//

#ifndef UNTITLED_FUNCTIONS_H
#define UNTITLED_FUNCTIONS_H

#define COUNT_BITS(value, ptr_bits, ptr_zero_bits)                                      \
    if (ptr_bits != NULL && ptr_zero_bits != NULL) {                                    \
        int cnt = 0, i = 0, zeros = 0;                                                             \
        \
                                                                                        \
                                                                                        \
        while ((int) ((int)sizeof(value) * 8) > i) {                                                                 \
            if ((value >> i) & 1 != 0) {                                              \
                    cnt += 1;                                                                             \
            }                                                                           \
            else   {                                                                     \
                zeros += 1;                                                   \
            }                                                                            \
            i += 1;                                                              \
        };                                                                               \
                                                                                        \
        *ptr_bits = cnt, *ptr_zero_bits = zeros;                                                               \
    };                                                                                   \


#define DISPLAY_BITS(value) \
                            \
                            \
                        \
                                                                     \
        \
                                                                                        \
        for (int i = (int) ((int)sizeof(value) * 8) - 1; i >= 0; ) {                                                                 \
            if ((value >> i) & 1 != 0) {                                              \
                    printf("%d", 1);                                                                            \
            }                                                                           \
            else   {                                                                     \
                printf("%d", 0);                                                   \
            }                                                                            \
            i -= 1;                                                              \
        }               \
        printf("\n");\
                            \
\

#define REVERSE_BITS(ptr)   \
        if (sizeof(*ptr) == sizeof(unsigned short)) { \
        \
            unsigned short tmp = 0, size = (unsigned short) sizeof(*ptr) * 8;                  \
            for (int i = 0; i < (int) size; i++) {                                             \
                if ((*ptr & (1 << i))) {                                                       \
                    tmp |= 1 << size - 1 - i;                                                  \
                }                                                                              \
            }                                                                                  \
            *ptr = tmp;                                                                        \
        }                                                                                      \
                                                                                               \
        if (sizeof(*ptr) == sizeof(unsigned char)) {                                           \
            unsigned char tmp = 0, size = (unsigned char) sizeof(*ptr) * 8;                    \
            for (int i = 0; i < (int) size; i++) {                                             \
                if ((*ptr & (1 << i))) {                                                       \
                    tmp |= 1 << size - 1 - i;                                                  \
                }                                                                              \
            }                                                                                  \
            *ptr = tmp;                                                                        \
                                                                                               \
        }                                                                                      \
                            \
                            \
                            \
                                                                                               \
        if (sizeof(*ptr) == sizeof (unsigned int)) {                                           \
            unsigned int tmp = 0, size = (unsigned int) sizeof(*ptr) * 8;                      \
            for (int i = 0; i < (int) size; i++) {                                             \
                if ((*ptr & (1 << i))) {                                                       \
                    tmp |= 1 << size - 1 - i;                                                  \
                }                                                                              \
            }                                                                                  \
            *ptr = tmp;                                                                        \
        }                                                                                      \
                            \
        if (sizeof(*ptr) == sizeof(unsigned long)) {                                           \
            unsigned long tmp = 0, size = (unsigned long) sizeof(*ptr) * 8;                      \
            for (int i = 0; i < (int) size; i++) {                                             \
                tmp = tmp << 1;                                                                \
                if (*ptr & 1) { \
                    tmp = tmp ^ 1;                                                             \
                            \
                    \
                }           \
                *ptr = *ptr >> 1;\
            }                                                                                  \
            *ptr = tmp;\
        }                                                                                       \
                                                                                               \





#endif //UNTITLED_FUNCTIONS_H
