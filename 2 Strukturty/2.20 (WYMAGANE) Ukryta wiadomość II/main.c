#include <stdio.h>
#include <math.h>
#include <limits.h>
#include "tested_declarations.h"
#include "rdebug.h"

struct message_t {
    char a; // 1 byte
    double b; // 8 bytes
    int c; // 4 bytes
};

#define MAX_ARR_SIZE 2000

int load_data(struct message_t *cp, int size, const char *filename);
int decode_message(const struct message_t *cp, int size, char *msg, int text_size);

int main() {
    struct message_t cp[100];
    struct message_t* cp_p = (void *)&cp;
    char filename[30] = {0}, msg[MAX_ARR_SIZE] = {0};
    char *f_name = (void *)&filename, *msg_p = (void *)&msg;

    printf("Enter file name:\n");
    scanf("%30[^\n]", f_name);

    while (getchar() != '\n');

    int n = load_data(cp_p, 100, f_name);

    if (n == -2) {
        printf("Couldn't open file");
        return 4;
    } else if (n == -3) {
        printf("File corrupted");
        return 6;
    }

    decode_message(cp_p, 100, msg_p, 2000);

    printf("%s", msg_p);

    return 0;
}

int load_data(struct message_t *cp, int size, const char *filename) {
    if (cp == NULL || size <= 0 || filename == NULL) return -1;

    FILE *f1_p = fopen(filename, "rb");
    if (f1_p == NULL) return -2;

    unsigned int is_corrupted = 0;

    fread(&is_corrupted, sizeof(unsigned int), 1, f1_p);
    if (is_corrupted % 24 != 0 || !is_corrupted) {
        fclose(f1_p);
        return -3;
    }

    int i = 0;
    for (; i < size && i < (int)is_corrupted; i++) {
        fread(cp + i, 1, 24, f1_p);
    }

    fclose(f1_p);
    return i;
}

int decode_message(const struct message_t *cp, int size, char *msg, int text_size) {
    if (cp == NULL || size <= 0 || msg == NULL || text_size <= 0) return 1;

    int idx = 0;
    for (int i = 0; i < size; i++) {
//        const char *ch = (const char*)(cp + i);
        const char *ch_p = &((cp + i) -> a);

        for (int j = 1; j < 8; j++, idx++) *(msg + idx) = *(ch_p + j);
        for (int j = 20; j < 24; j++, idx++) *(msg + idx) = *(ch_p + j);
//        *(msg + i) = *ch_p;
    }

    *(msg + text_size - 1) = '\0';
    return 0;
}
