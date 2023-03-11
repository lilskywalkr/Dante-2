#include <stdio.h>
#include <string.h>

#include <stdlib.h>
#include "tested_declarations.h"
#include "rdebug.h"
/*#include "tested_declarations.h"
#include "rdebug.h"*/

int main() {
    char *txt = NULL, *tmp;
    int size = 0, bytes = 0;
    char ch = 0;

    tmp = realloc(txt, sizeof(char) * (bytes + 50));

    if (tmp == NULL) {
        printf("Failed to allocate memory");
        return 8;
    }

    printf("Podaj tekst:");

    do {
        txt = tmp;
        for (int i = 0; i < 50 && ch != '\n'; i++, size++) {
            scanf("%c", &ch);
            if (ch != '\n') {
                *(txt + size) = ch;
            }
        }

        bytes += 50;
        tmp = realloc(txt, sizeof(char) * (bytes + 50));
    } while (ch != '\n' && tmp);

    *(txt + size - 1) = '\0';
    printf("%s", txt);

    free(txt);
    txt = NULL;
    return 0;
}


