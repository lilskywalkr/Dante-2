#include <stdio.h>

#include "vector.h"

int main() {
    int N = 0, n = 0, value = 0, choice = 0;
    struct vector_t *vec;

    printf("Podaj pojemność tablicy:");
    if (!scanf("%d", &N)) {
        printf("Incorrect input");
        return 1;
    }

    while (getchar() != '\n');

    if (N <= 0) {
        printf("Incorrect input data");
        return 2;
    }

    n = vector_create_struct(&vec, N);
    if (n == 1 || n == 2) {
        printf("Failed to allocate memory");
        return 8;
    }

    do {
        printf("Co chcesz zrobic:");
        if (!scanf("%d", &choice)) {
            printf("incorrect input");
            vector_destroy_struct(&vec);
            return 1;
        }

        while (getchar() != '\n');

        switch (choice) {
            case 1:
                printf("Podaj kolejne liczby, które mają zostać dodane do tablicy:");
                do {
                    if (!scanf("%d", &value)) {
                        printf("incorrect input");
                        vector_destroy_struct(&vec);
                        return 1;
                    }

                    if (value) n = vector_push_back(vec, value);
                    if (n == 1 || n == 2) {
                        printf("Failed to allocate memory\n");
                        break;
                    }
                } while (value);

                vector_display(vec);
                break;
            case 2:
                printf("Podaj kolejne liczby, które mają zostać usuniete z tablicy:");
                do {
                    if (!scanf("%d", &value)) {
                        printf("incorrect input");
                        vector_destroy_struct(&vec);
                        return 1;
                    }

                    if (vec -> size > 0 && value) {
                        vector_erase(vec, value);
                    }
                } while (value);

                if (!(vec -> size)) {
                    printf("Buffer is empty\n");
                } else {
                    vector_display(vec);
                }
                break;
            default:
                printf("incorrect input data\n");
                break;
        }
    } while (choice);

    vector_destroy_struct(&vec);
    return 0;
}

