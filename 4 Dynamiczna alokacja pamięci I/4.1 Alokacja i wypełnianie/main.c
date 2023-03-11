#include <stdio.h>
#include <stdlib.h>
#include "tested_declarations.h"
#include "rdebug.h"

#define MAX_ARR_SIZE 100

int main() {
    int *arr = calloc(MAX_ARR_SIZE, sizeof(int));

    if (arr == NULL) {
        printf("Failed to allocate memory");
        return 8;
    }

    for (int i = 0; i < MAX_ARR_SIZE; i++) {
        *(arr + i) = i;
    }

    for (int i = 0; i < MAX_ARR_SIZE; i++) {
        printf("%d ", *(arr + i));
    }

    free(arr);
    return 0;
}
