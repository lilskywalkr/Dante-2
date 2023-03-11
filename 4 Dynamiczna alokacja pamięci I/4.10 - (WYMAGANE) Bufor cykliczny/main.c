#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "circular_buffer.h"
//#include "circular_buffer.c"


int main() {
    int N = 0, flag = 1, choice = 0, n = 0, value = 0, err_code = 0;
    int *err_code_p = (int *)&err_code;
    struct circular_buffer_t *cb;

    printf("Podaj rozmiar bufora:");
    if (!scanf("%d", &N)) {
        printf("Incorrect input");
        return 1;
    }

    while (getchar() != '\n');

    if (N <= 0) {
        printf("Incorrect input data");
        return 2;
    }

    n = circular_buffer_create_struct(&cb, N);

    if (n == 2 || n == 1) {
        printf("Failed to allocate memory");
        return 8;
    }

    while (flag) {
        printf("Co chcesz zrobic?");
        if ((n = scanf("%d", &choice)) == 0) {
            printf("Incorrect input");
            circular_buffer_destroy_struct(&cb);
            return 1;
        }

        while (getchar() != '\n');

        if (n == 1) {
            switch (choice) {
                case 0:
                    flag = 0;
                    break;
                case 1:
                    printf("Podaj liczbe:");
                    if (!scanf("%d", &value)) {
                        printf("Incorrect input");
                        circular_buffer_destroy_struct(&cb);
                        return 1;
                    }

                    while (getchar() != '\n');

                    circular_buffer_push_back(cb, value);
                    break;
                case 2:
                    if (circular_buffer_empty(cb)) printf("Buffer is empty\n");
                    else printf("%d\n", circular_buffer_pop_back(cb, err_code_p));
                    break;
                case 3:
                    if (circular_buffer_empty(cb)) printf("Buffer is empty\n");
                    else printf("%d\n", circular_buffer_pop_front(cb, err_code_p));
                    break;
                case 4:
                    if (circular_buffer_empty(cb)) printf("Buffer is empty\n");
                    else circular_buffer_display(cb);
                    break;
                case 5:
                    printf("%d\n",circular_buffer_empty(cb));
                    break;
                case 6:
                    printf("%d\n", circular_buffer_full(cb));
                    break;
                default:
                    printf("Incorrect input data\n");
                    break;
            }
        }
    }

    circular_buffer_destroy_struct(&cb);
    return 0;
}
