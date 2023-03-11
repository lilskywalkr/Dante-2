#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

#include "linked_list.h"

int main() {
    int choice = 0, value = 0, index = 0, err_code = 0;
    struct linked_list_t *ll = ll_create();
    if (ll == NULL) {
        printf("Failed to allocate memory");
        return 8;
    }

    do {
        printf("Co chcesz zrobic? ");
        if (!scanf("%d", &choice)) {
            printf("Incorrect input");
            ll_clear(ll);
            free(ll);
            return 1;
        }

        while (getchar() ^ '\n');

        if (choice == 1) {
            printf("Podaj wartosc: ");
            if (!scanf("%d", &value)) {
                printf("Incorrect input");
                ll_clear(ll);
                free(ll);
                return 1;
            }

            while (getchar() != '\n');

            err_code = ll_push_back(ll, value);

            if (err_code == 2) {
                printf("Failed to allocate memory");
                ll_clear(ll);
                free(ll);
                return 8;
            }
        } else if (choice == 2) {
            if (ll_is_empty(ll)) {
                printf("List is empty\n");
            } else {
                value = ll_pop_back(ll, NULL);
                printf("%d\n", value);
            }
        } else if (choice == 3) {
            printf("Podaj wartosc: ");
            if (!scanf("%d", &value)) {
                printf("Incorrect input");
                ll_clear(ll);
                free(ll);
                return 1;
            }

            while (getchar() != '\n');

            err_code = ll_push_front(ll, value);

            if (err_code == 2) {
                printf("Failed to allocate memory");
                ll_clear(ll);
                free(ll);
                return 8;
            }
        } else if (choice == 4) {
            if (ll_is_empty(ll)) {
                printf("List is empty\n");
            } else {
                value = ll_pop_front(ll, NULL);
                printf("%d\n", value);
            }
        } else if (choice == 5) {
            printf("Podaj wartosc: ");
            if (!scanf("%d", &value)) {
                printf("Incorrect input");
                ll_clear(ll);
                free(ll);
                return 1;
            }

            while (getchar() != '\n');

            printf("Podaj indeks: ");
            if (!scanf("%d", &index)) {
                printf("Incorrect input");
                ll_clear(ll);
                free(ll);
                return 1;
            }

            while (getchar() != '\n');

            if (index > ll_size(ll) || index < 0) {
                printf("Index out of range\n");
            } else {
                err_code = ll_insert(ll, index, value);

                if (err_code == 2) {
                    printf("Failed to allocate memory");
                    ll_clear(ll);
                    free(ll);
                    return 8;
                }
            }
        } else if (choice == 6) {
            if (ll_is_empty(ll)) {
                printf("List is empty\n");
            } else {
                printf("Podaj indeks: ");
                if (!scanf("%d", &index)) {
                    printf("Incorrect input");
                    ll_clear(ll);
                    free(ll);
                    return 1;
                }

                while (getchar() != '\n');

                if (index >= ll_size(ll) || index < 0) {
                    printf("Index out of range\n");
                } else {
                    value = ll_remove(ll, index, NULL);
                    printf("%d\n", value);
                }
            }
        } else if (choice == 7) {
            if (ll_is_empty(ll)) {
                printf("List is empty\n");
            } else {
                printf("%d\n", ll_back(ll, NULL));
            }
        } else if (choice == 8) {
            if (ll_is_empty(ll)) {
                printf("List is empty\n");
            } else {
                printf("%d\n", ll_front(ll, NULL));
            }
        } else if (choice == 9) {
            printf("%d\n", ll_is_empty(ll));
        } else if (choice == 10) {
            printf("%d\n", ll_size(ll));
        } else if (choice == 11) {
            ll_clear(ll);
        } else if (choice == 12) {
            if (ll_is_empty(ll)) {
                printf("List is empty\n");
            } else {
                printf("Podaj indeks: ");
                if (!scanf("%d", &index)) {
                    printf("Incorrect input");
                    ll_clear(ll);
                    free(ll);
                    return 1;
                }

                while (getchar() != '\n');

                if (index > ll_size(ll) || index < 0) {
                    printf("Index out of range\n");
                } else {
                    value = ll_at(ll, index, NULL);
                    printf("%d\n", value);
                }
            }
        } else if (choice == 13) {
            if (ll_is_empty(ll)) {
                printf("List is empty\n");
            } else {
                ll_display(ll);
            }
        } else {
            if (choice) {
                printf("Incorrect input data\n");
            }
        }
    } while (choice != 0);

    ll_clear(ll);
    free(ll);
    return 0;
}


