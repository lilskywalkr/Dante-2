#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "tested_declarations.h"
#include "rdebug.h"

#define MAX_ARR_SIZE 1

int main() {
    float *arr = calloc(MAX_ARR_SIZE, sizeof(float));

    if (arr == NULL) {
        printf("Failed to allocate memory");
        return 8;
    }

    *arr = (float)M_PI;

    printf("%f %p", *arr, (void *)arr);

    free(arr);
    return 0;
}
