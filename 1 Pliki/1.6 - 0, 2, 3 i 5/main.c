#include <stdio.h>
#include "tested_declarations.h"
#include "rdebug.h"

int main() {
    FILE *f1_p, *f2_p, *f3_p, *f4_p;
    int a = 0;

    f1_p = fopen("2.txt", "w");
    f2_p = fopen("3.txt", "w");
    f3_p = fopen("5.txt", "w");
    f4_p = fopen("0.txt", "w");

    if (f1_p == NULL) {
        printf("couldn't create file");
        if (f2_p) fclose(f2_p);
        if (f3_p) fclose(f3_p);
        if (f4_p) fclose(f4_p);
        return 5;
    }

    if (f2_p == NULL) {
        printf("couldn't create file");
        fclose(f1_p);
        if (f3_p) fclose(f3_p);
        if (f4_p) fclose(f4_p);
        return 5;
    }

    if (f3_p == NULL) {
        printf("couldn't create file");
        fclose(f1_p);
        fclose(f2_p);
        if (f4_p) fclose(f4_p);
        return 5;
    }

    if (f4_p == NULL) {
        printf("couldn't create file");
        fclose(f1_p);
        fclose(f2_p);
        fclose(f3_p);
        return 5;
    }

    printf("Podaj liczby:\n");
    do {
        scanf("%d", &a);
        if (a) {
            if (a % 2 == 0) fprintf(f1_p, "%d\n", a);
            if (a % 3 == 0) fprintf(f2_p, "%d\n", a);
            if (a % 5 == 0) fprintf(f3_p, "%d\n", a);
            if ((a % 5) && (a % 2) && (a % 3)) fprintf(f4_p, "%d\n", a);
        }
    } while (a != 0);

    printf("Files saved");

    fclose(f1_p);
    fclose(f2_p);
    fclose(f3_p);
    fclose(f4_p);

    return 0;
}
