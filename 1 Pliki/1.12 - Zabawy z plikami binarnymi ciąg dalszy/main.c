#include <stdio.h>
#include "tested_declarations.h"
#include "rdebug.h"

int main() {
    char name1[31] = {0};
    char name2[31] = {0};
    char *file1_name = (void *)&name1;
    char *file2_name = (void *)&name2;
    float nums[100] = {0.0f};
    float *nums_p = (float *)&nums;
    float out[2] = {0.0f};
    float *out_p = (float *)&out;
    float sum = 0.0f, avg = 0.0f;
    int len = 0;
    FILE *f1_p, *f2_p;

    printf("Podaj sciezke do pliku:\n");
    scanf("%30[^\n]", file1_name);

    f1_p = fopen(file1_name, "rb");

    if (f1_p == NULL) {
        printf("Couldn't open file");
        return 4;
    }

    while (getchar() != '\n') { };

    len = (int)fread(nums_p, sizeof(float), 100, f1_p);
    if (len != 100) {
        printf("File corrupted");
        fclose(f1_p);
        return 6;
    }

    printf("Podaj sciezke do pliku docelowego:\n");
    scanf("%30[^\n]", file2_name);

    f2_p = fopen(file2_name, "wb");

    if (f2_p == NULL) {
        printf("Couldn't create file");
        fclose(f1_p);
        return 5;
    }

    fread(nums_p, sizeof(float), 100, f1_p);

    for (int i = 0; i < 100; i++) sum += *(nums_p + i);
    avg += sum / 100;

    *(out_p + 0) = sum;
    *(out_p + 1) = avg;

    fwrite(out_p, sizeof(float), 2, f2_p);

    printf("File saved");
    fclose(f1_p);
    fclose(f2_p);

    return 0;
}
