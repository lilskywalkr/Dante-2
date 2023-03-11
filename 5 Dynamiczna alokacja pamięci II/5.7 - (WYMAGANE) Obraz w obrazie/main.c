#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "image_utils.h"

int main() {
    int err_code = 0, a = 0, destx = 0, desty = 0;

    char *filename1 = calloc(40, sizeof(char));
    if (filename1 == NULL) {
        printf("Failed to allocate memory");
        return 8;
    }

    printf("Enter destination image file name:");
    scanf("%39[^\n]", filename1);

    while (getchar() != '\n');

    struct image_t *src_img = load_image_t(filename1, &err_code);

    if (err_code == 2) {
        free(filename1);
        printf("Couldn't open file");
        return 4;
    } else if (err_code == 3) {
        free(filename1);
        printf("File corrupted");
        return 6;
    } else if (err_code == 4) {
        free(filename1);
        printf("Failed to allocate memory");
        return 8;
    }

    printf("How many subimages you want to draw:");
    if (!scanf("%d", &a)) {
        destroy_image(&src_img);
        free(filename1);
        printf("Incorrect input");
        return 1;
    }

    while (getchar() != '\n');

    if (a <= 0) {
        destroy_image(&src_img);
        free(filename1);
        printf("Incorrect input data");
        return 2;
    }

    char *filename2 = calloc(40, sizeof(char));
    if (filename2 == NULL) {
        printf("Failed to allocate memory");
        destroy_image(&src_img);
        free(filename1);
        return 8;
    }

    struct image_t *img;
    for (int i = 0; i < a; i++) {
        memset(filename2, 0, 40);
        printf("Enter a name of a subimage:");
        scanf("%39[^\n]", filename2);

        while (getchar() != '\n');

        img = load_image_t(filename2, &err_code);
        if (err_code == 2) {
            printf("Couldn't open file\n");
            continue;
        } else if (err_code == 3) {
            printf("File corrupted\n");
            continue;
        } else if (err_code == 4) {
            printf("Failed to allocate memory");
            free(filename1);
            free(filename2);
            destroy_image(&src_img);
            return 8;
        }

        printf("Enter coordinates (x, y):");
        if (scanf("%d %d", &destx, &desty) != 2) {
            printf("Incorrect input");
            free(filename1);
            free(filename2);
            destroy_image(&src_img);
            destroy_image(&img);
            return 1;
        }

        while (getchar() != '\n');

        if (draw_image(src_img, img, destx, desty)) {
            printf("Incorrect input data\n");
        }
        if (img) destroy_image(&img);
    }

    free(filename2);

    char ch1 = *(filename1 + (int) strlen(filename1) - 1);
    char ch2 = *(filename1 + (int) strlen(filename1) - 2);
    char ch3 = *(filename1 + (int) strlen(filename1) - 3);
    char *suffix = "_modified.";
    char *new_filename1 = calloc(50, sizeof(char));
    for (int i = 0; i < (int)strlen(filename1) - 4; i++) {
        *(new_filename1 + i) = *(filename1 + i);
    }

    strcat(new_filename1, suffix);
    *(new_filename1 + strlen(new_filename1)) = ch3;
    *(new_filename1 + strlen(new_filename1)) = ch2;
    *(new_filename1 + strlen(new_filename1)) = ch1;

    if (save_image_t(new_filename1, src_img) == 2) {
        free(filename1);
        free(new_filename1);
        destroy_image(&src_img);
        printf("Couldn't create file");
        return 5;
    }

    printf("File saved");
    free(filename1);
    free(new_filename1);
    destroy_image(&src_img);
    return 0;
}

