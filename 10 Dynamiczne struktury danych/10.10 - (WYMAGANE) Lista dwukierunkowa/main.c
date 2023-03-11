#include <stdio.h>
#include <stdlib.h>

#include "doubly_linked_list.h"

int main() {
    int choice = 0, value = 0, index = 0, err_code = 0;
    struct doubly_linked_list_t *dll = dll_create();
    if (dll == NULL) {
        printf("Failed to allocate memory");
        return 8;
    }

    do {
        printf("Co chcesz zrobic? ");
        if (!scanf("%d", &choice)) {
            printf("Incorrect input");
            dll_clear(dll);
            free(dll);
            return 1;
        }

        while (getchar() ^ '\n');

        if (choice == 1) {
            printf("Podaj wartosc: ");
            if (!scanf("%d", &value)) {
                printf("Incorrect input");
                dll_clear(dll);
                free(dll);
                return 1;
            }

            while (getchar() != '\n');

            err_code = dll_push_back(dll, value);

            if (err_code == 2) {
                printf("Failed to allocate memory");
                dll_clear(dll);
                free(dll);
                return 8;
            }
        } else if (choice == 2) {
            if (dll_is_empty(dll)) {
                printf("List is empty\n");
            } else {
                value = dll_pop_back(dll, NULL);
                printf("%d\n", value);
            }
        } else if (choice == 3) {
            printf("Podaj wartosc: ");
            if (!scanf("%d", &value)) {
                printf("Incorrect input");
                dll_clear(dll);
                free(dll);
                return 1;
            }

            while (getchar() != '\n');

            err_code = dll_push_front(dll, value);

            if (err_code == 2) {
                printf("Failed to allocate memory");
                dll_clear(dll);
                free(dll);
                return 8;
            }
        } else if (choice == 4) {
            if (dll_is_empty(dll)) {
                printf("List is empty\n");
            } else {
                value = dll_pop_front(dll, NULL);
                printf("%d\n", value);
            }
        } else if (choice == 5) {
            printf("Podaj wartosc: ");
            if (!scanf("%d", &value)) {
                printf("Incorrect input");
                dll_clear(dll);
                free(dll);
                return 1;
            }

            while (getchar() != '\n');

            printf("Podaj indeks: ");
            if (!scanf("%d", &index)) {
                printf("Incorrect input");
                dll_clear(dll);
                free(dll);
                return 1;
            }

            while (getchar() != '\n');

            if (index > dll_size(dll) || index < 0) {
                printf("Index out of range\n");
            } else {
                err_code = dll_insert(dll, index, value);

                if (err_code == 2) {
                    printf("Failed to allocate memory");
                    dll_clear(dll);
                    free(dll);
                    return 8;
                }
            }
        } else if (choice == 6) {
            if (dll_is_empty(dll)) {
                printf("List is empty\n");
            } else {
                printf("Podaj indeks: ");
                if (!scanf("%d", &index)) {
                    printf("Incorrect input");
                    dll_clear(dll);
                    free(dll);
                    return 1;
                }

                while (getchar() != '\n');

                if (index >= dll_size(dll) || index < 0) {
                    printf("Index out of range\n");
                } else {
                    value = dll_remove(dll, index, NULL);
                    printf("%d\n", value);
                }
            }
        } else if (choice == 7) {
            if (dll_is_empty(dll)) {
                printf("List is empty\n");
            } else {
                printf("%d\n", dll_back(dll, NULL));
            }
        } else if (choice == 8) {
            if (dll_is_empty(dll)) {
                printf("List is empty\n");
            } else {
                printf("%d\n", dll_front(dll, NULL));
            }
        } else if (choice == 9) {
            printf("%d\n", dll_is_empty(dll));
        } else if (choice == 10) {
            printf("%d\n", dll_size(dll));
        } else if (choice == 11) {
            dll_clear(dll);
        } else if (choice == 12) {
            if (dll_is_empty(dll)) {
                printf("List is empty\n");
            } else {
                printf("Podaj indeks: ");
                if (!scanf("%d", &index)) {
                    printf("Incorrect input");
                    dll_clear(dll);
                    free(dll);
                    return 1;
                }

                while (getchar() != '\n');

                if (index > dll_size(dll) || index < 0) {
                    printf("Index out of range\n");
                } else {
                    value = dll_at(dll, index, NULL);
                    printf("%d\n", value);
                }
            }
        } else if (choice == 13) {
            if (dll_is_empty(dll)) {
                printf("List is empty\n");
            } else {
                dll_display(dll);
            }
        } else if (choice == 14) {
            if (dll_is_empty(dll)) {
                printf("List is empty\n");
            } else {
                dll_display_reverse(dll);
            }
        } else {
            if (choice) {
                printf("Incorrect input data\n");
            }
        }
    } while (choice != 0);

    dll_clear(dll);
    free(dll);
    return 0;
}


