#include <stdio.h>
#include <string.h>

union bit_set {
    unsigned char a;
    struct {
        unsigned char b1: 1;
        unsigned char b2: 1;
        unsigned char b3: 1;
        unsigned char b4: 1;
        unsigned char b5: 1;
        unsigned char b6: 1;
        unsigned char b7: 1;
        unsigned char b8: 1;
    } bits;
};

int encode(const char *input, char *txt, const char *output);
int decode(const char * filename, char *txt, int size);

int main() {
    char txt[1000];
    char *txt_p = (void *)&txt;
    char filename1[29];
    char filename2[29];
    char *f_name1 = (void *)&filename1;
    char *f_name2 = (void *)&filename2;
    char ch;
    int n;

    printf("Do you want to encode (E/e) or decode (D/d) a message?");
    scanf("%c", &ch);

    while (getchar() != '\n');

    if (ch == 'd' || ch == 'D') {
        printf("Enter input file name:");
        scanf("%29[^\n]", f_name1);

        n = decode(f_name1, txt_p, 1000);

        if (n == 2) {
            printf("Couldn't open file");
            return 4;
        } else if (n == 3) {
            printf("File corrupted");
            return 6;
        }

        printf("%s", txt_p);
    } else if (ch == 'e' || ch == 'E') {
        printf("Enter a message to be encoded:");
        scanf("%1000[^\n]", txt_p);

        while (getchar() != '\n');

        printf("Enter input file name:");
        scanf("%29[^\n]", f_name1);

        while (getchar() != '\n');

        printf("Enter output file name:");
        scanf("%29[^\n]", f_name2);

        n = encode(f_name1, txt_p, f_name2);
        if (n == 2) {
            printf("Couldn't open file");
            return 4;
        } else if (n == 3) {
            printf("File corrupted");
            return 6;
        } else if (n == 4) {
            printf("Couldn't create file");
            return 5;
        }

        printf("File saved");
    } else {
        printf("Incorrect input data");
        return 1;
    }

    return 0;
}

int encode(const char *input, char *txt, const char *output) {
    if (input == NULL || txt == NULL || output == NULL) return 1;

    union bit_set uni1, uni2;
    int n1 = 0, n3 = 0, pxl = 0, rows = 0;
    char ch1, ch2;
    FILE *f1_p, *f2_p;

    f1_p = fopen(input, "r");
    if (f1_p == NULL) return 2;

    for (int i = 0; i < (int) strlen(txt); i++) {
        for (int j = 0; j < 8; j++) {
            if ((n3 = fscanf(f1_p, "%d", &pxl)) != EOF && n3) rows++;
            else if (n3 == EOF) break;
        }
    }

    if (rows < (int) strlen(txt) * 8) {
        fclose(f1_p);
        return 3;
    }

    f2_p = fopen(output, "w");
    if (f2_p == NULL) {
        fclose(f1_p);
        return 4;
    }

    fseek(f1_p, 0, SEEK_SET);
    for (int i = 0; i < (int) strlen(txt); i++) {
        uni1.a = *(txt + i);
        for (int j = 0; j < 8; j++) {
            fscanf(f1_p, "%d", &pxl);
            uni2.a = pxl;

            if (j == 0) uni2.bits.b1 = uni1.bits.b8;
            else if (j == 1) uni2.bits.b1 = uni1.bits.b7;
            else if (j == 2) uni2.bits.b1 = uni1.bits.b6;
            else if (j == 3) uni2.bits.b1 = uni1.bits.b5;
            else if (j == 4) uni2.bits.b1 = uni1.bits.b4;
            else if (j == 5) uni2.bits.b1 = uni1.bits.b3;
            else if (j == 6) uni2.bits.b1 = uni1.bits.b2;
            else if (j == 7) uni2.bits.b1 = uni1.bits.b1;

            fprintf(f2_p, "%d ", uni2.a);

            n1 = fscanf(f1_p, "%c", &ch1);
            fscanf(f1_p, "%c", &ch2);

            if (n1 == EOF) break;
            else if (ch2 == '\n') fprintf(f2_p, "\n");
            else fseek(f1_p, -1, SEEK_CUR);
        }
    }

    while (1) {
        if (fscanf(f1_p, "%d", &pxl) == EOF) break;
        uni2.a = pxl;
        uni2.bits.b1 = 0;
        fprintf(f2_p, "%d ", uni2.a);

        n1 = fscanf(f1_p, "%c", &ch1);
        fscanf(f1_p, "%c", &ch2);

        if (n1 == EOF) {
            break;
        } else if (ch2 == '\n') {
            fprintf(f2_p, "\n");
        } else {
            fseek(f1_p, -1, SEEK_CUR);
        }
    }

    fclose(f1_p);
    fclose(f2_p);
    return 0;
}

int decode(const char * filename, char *txt, int size) {
    if (filename == NULL || txt == NULL || size <= 0) return 1;

    union bit_set uni;
    int bits[8];
    int *bits_p = (int *)&bits;
    int n1 = 0, n2 = 0, n3 = 0, pxl = 0, rows = 0;
    char ch1, ch2;
    FILE *f1_p;

    f1_p = fopen(filename, "r");
    if (f1_p == NULL) return 2;

    for (int i = 0; i < size; i++) {
        rows = 0;
        for (int j = 0; j < 8; j++) {
            if ((n3 = fscanf(f1_p, "%d", &pxl)) != EOF && n3) rows++;
            else if (n3 == EOF) break;
        }

        if (rows != 8) {
            fclose(f1_p);
            return  3;
        }
    }

    fseek(f1_p, 0, SEEK_SET);
    rows = 0;
    for (int i = 0; i < size && n3 != EOF; i++) {
        rows++;

        n3 = fscanf(f1_p, "%d", &pxl);
        n1 = fscanf(f1_p, "%c", &ch1);
        n2 = fscanf(f1_p, "%c", &ch2);

        if ((ch1 == ' ' && ch2 != '\n') && (n1 != EOF && n2 != EOF)) {
            fseek(f1_p, -1, SEEK_CUR);
        } else if (((ch1 == ' ' && ch2 == '\n') || (n1 == EOF || n2 == EOF)) && rows % 8 == 0) {
            rows = 0;
        }

        if (!n3) {
            fclose(f1_p);
            return 3;
        }
    }

    fseek(f1_p, 0, SEEK_SET);
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < 8; j++) {
            if (fscanf(f1_p, "%d", &pxl) != EOF) {
                uni.a = pxl;
                *(bits_p + j) = uni.bits.b1;
            }
        }
        uni.bits.b8 = *(bits_p + 0);
        uni.bits.b7 = *(bits_p + 1);
        uni.bits.b6 = *(bits_p + 2);
        uni.bits.b5 = *(bits_p + 3);
        uni.bits.b4 = *(bits_p + 4);
        uni.bits.b3 = *(bits_p + 5);
        uni.bits.b2 = *(bits_p + 6);
        uni.bits.b1 = *(bits_p + 7);

        *(txt + i) = (char)uni.a;
    }

    *(txt + size - 1) = '\0';

    fclose(f1_p);
    return 0;
}
