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

int decode(const char *input, const char *output);
int encode(const char *input, const char *output);

int main() {
    char filename1[29];
    char filename2[29];
    char ch;
    int n;

    printf("Enter operation (D - bin to dec; E - dec to bin):");
    scanf("%c", &ch);

    while (getchar() != '\n');

    if (ch == 'd' || ch == 'D') {
        printf("Enter input file name:");
        scanf("%29[^\n]", filename1);

        while (getchar() != '\n');

        printf("Enter output file name:");
        scanf("%29[^\n]", filename2);

        n = decode(filename1, filename2);

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
    } else if (ch == 'e' || ch == 'E') {

        printf("Enter input file name:");
        scanf("%29[^\n]", filename1);

        while (getchar() != '\n');

        printf("Enter output file name:");
        scanf("%29[^\n]", filename2);

        n = encode(filename1, filename2);
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
        return 2;
    }

    return 0;
}

int encode(const char *input, const char *output) {
    if (input == NULL || output == NULL) return 1;

    union bit_set uni;
    int n = 0, cnt = 0, flg = 0, num = 0;
    char bit;

    FILE *f1_p, *f2_p;

    f1_p = fopen(input, "r");
    if (f1_p == NULL) return 2;

    while (1) {
        num = 0;
        for (int i = 0; i < 3; i++) {
            if ((n = fscanf(f1_p, "%c", &bit)) == EOF || !n || (bit < '0' || bit > '9')) {
                flg = 1;
                break;
            }
            num = num * 10 + (bit - '0');
            cnt++;
        }

        if (!n || (bit < '0' || bit > '9') || (num > 255)) {
            fclose(f1_p);
            return 3;
        }

        if (flg) break;
    }

    if (cnt % 3 != 0) {
        fclose(f1_p);
        return 3;
    }

    f2_p = fopen(output, "w");
    if (f2_p == NULL) {
        fclose(f1_p);
        return 4;
    }


    fseek(f1_p, 0, SEEK_SET);
    flg = 0;
    while(1) {
        uni.a = 0;
        for (int i = 0; i < 3; i++) {
            n = fscanf(f1_p, "%c", &bit) == EOF;
            if (n) {
                flg = 1;
                break;
            }

            uni.a = uni.a * 10 + (bit - '0');
        }
        if (flg) break;
        fprintf(f2_p, "%d", uni.bits.b8);
        fprintf(f2_p, "%d", uni.bits.b7);
        fprintf(f2_p, "%d", uni.bits.b6);
        fprintf(f2_p, "%d", uni.bits.b5);
        fprintf(f2_p, "%d", uni.bits.b4);
        fprintf(f2_p, "%d", uni.bits.b3);
        fprintf(f2_p, "%d", uni.bits.b2);
        fprintf(f2_p, "%d", uni.bits.b1);
    }

    fclose(f1_p);
    fclose(f2_p);
    return 0;
}

int decode(const char *input, const char *output) {
    if (input == NULL || output == NULL) return 1;

    union bit_set uni;
    int n = 0, cnt = 0, flg = 0;
    unsigned char bit;

    FILE *f1_p, *f2_p;

    f1_p = fopen(input, "r");
    if (f1_p == NULL) return 2;

    while ((n = fscanf(f1_p, "%c", &bit)) != EOF) {
        cnt++;
        if (!n || (bit != '0' && bit != '1')) {
            fclose(f1_p);
            return 3;
        }
    }

    if (cnt % 8 != 0) {
        fclose(f1_p);
        return 3;
    }

    f2_p = fopen(output, "w");
    if (f2_p == NULL) {
        fclose(f1_p);
        return 4;
    }

    fseek(f1_p, 0, SEEK_SET);
    while(1) {
        for (int i = 0; i < 8; i++) {
            if (fscanf(f1_p, "%c", &bit) == EOF) {
                flg = 1;
                break;
            }

            if (i == 0) uni.bits.b8 = bit;
            else if (i == 1) uni.bits.b7 = bit;
            else if (i == 2) uni.bits.b6 = bit;
            else if (i == 3) uni.bits.b5 = bit;
            else if (i == 4) uni.bits.b4 = bit;
            else if (i == 5) uni.bits.b3 = bit;
            else if (i == 6) uni.bits.b2 = bit;
            else if (i == 7) uni.bits.b1 = bit;
        }
        if (flg) break;

        if (uni.a < 10) fprintf(f2_p, "00%d", uni.a);
        else if (uni.a < 100 && uni.a >= 10) fprintf(f2_p, "0%d", uni.a);
        else fprintf(f2_p, "%d", uni.a);
    }

    fclose(f1_p);
    fclose(f2_p);
    return 0;
}
