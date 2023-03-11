#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "tested_declarations.h"
#include "rdebug.h"

int main() {
    char name[31] = {0};
    char *file_name = (void *)&name;
    float nums[100] = {0.0f};
    float *nums_p = (float *)&nums;
    int neg_or_pos[2] = {1, -1};
    int *neg_or_pos_p = (int *)neg_or_pos;

    FILE *f_p;

    srand(time(NULL));

    printf("Podaj sciezke do pliku:\n");
    scanf("%30[^\n]", file_name);

    f_p = fopen(file_name, "wb");

    if (f_p == NULL) {
        printf("Couldn't create file");
        return 5;
    }

    for (int i = 0; i <= 100; i++) {
        *(nums_p + i) = (float)((float)(rand() % 100) / 1.6f) * (float)*(neg_or_pos_p + rand() % 2);
    }

    fwrite(nums_p, sizeof(float), 100, f_p);

    printf("File saved");
    fclose(f_p);

    return 0;
}
