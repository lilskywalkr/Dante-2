#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "image_utils.h"

int save_image_t(const char * filename, const struct image_t *m1) {
    if (filename == NULL || m1 == NULL || m1 -> ptr == NULL || m1 -> width <= 0 || m1 -> height <= 0
        || (*(m1 -> type + 0) != 'P' && *(m1 -> type + 1) != '2' && *(m1 -> type + 2) != '\0')) return 1;

    FILE *f_p;
    int n = 0;

    f_p = fopen(filename, "w");
    if (f_p == NULL) return 2;

    n = fprintf(f_p, "P2\n");
    if (!n) {
        fclose(f_p);
        return 3;
    }

    n = fprintf(f_p, "%d %d\n", m1 -> width, m1 -> height);
    if (!n) {
        fclose(f_p);
        return 3;
    }

    n = fprintf(f_p, "255\n");
    if (!n) {
        fclose(f_p);
        return 3;
    }

    for (int i = 0; i < m1 -> height; i++) {
        for (int j = 0; j < m1 -> width; j++) {
            n = fprintf(f_p, "%d ", *(*(m1 -> ptr + i) + j));
            if (!n) {
                fclose(f_p);
                return 3;
            }
        }
        fprintf(f_p, "\n");
    }

    fclose(f_p);
    return 0;
}

struct image_t* load_image_t(const char *filename, int *err_code) {
    if (filename == NULL) {
        if (err_code != NULL) {
            *err_code = 1;
        }
        return NULL;
    }

    int ch1 = 0, ch2 = 0, a = 0, width = 0, height = 0, greyness = 0, cnt = 0, n = 0, init = 0;
    FILE *f_p = fopen(filename, "r");
    if (f_p == NULL) {
        if (err_code != NULL) {
            *err_code = 2;
        }
        return NULL;
    }

    ch1 = fgetc(f_p);
    ch2 = fgetc(f_p);
    n += fscanf(f_p, "%d", &width);
    n += fscanf(f_p, "%d", &height);
    n += fscanf(f_p, "%d", &greyness);
    init = (int)ftell(f_p);

    if ((ch1 != 'P' || ch2 != '2') || width <= 0 || height <= 0 || greyness != 255 || n != 3) {
        if (err_code != NULL) {
            *err_code = 3;
        }
        fclose(f_p);
        return NULL;
    }

    while ((n = fscanf(f_p, "%d", &a)) != EOF) {
        if (!n || a < 0 || a > 255) {
            if (err_code != NULL) {
                *err_code = 3;
            }
            fclose(f_p);
            return NULL;
        }
        cnt += 1;
    }

    if (cnt != width * height) {
        if (err_code != NULL) {
            *err_code = 3;
        }
        fclose(f_p);
        return NULL;
    }

    struct image_t* img = calloc(1, sizeof(struct image_t));
    if (img == NULL) {
        if (err_code != NULL) {
            *err_code = 4;
        }
        fclose(f_p);
        return NULL;
    }

    img -> width = width;
    img -> height = height;
    img -> ptr = calloc(img -> height, sizeof(int *));
    if (img -> ptr == NULL) {
        if (err_code != NULL) {
            *err_code = 4;
        }
        fclose(f_p);
        free(img);
        img = NULL;
        return NULL;
    }

    for (int i = 0; i < height; i++) {
        *(img -> ptr + i) = calloc(width, sizeof(int));
        if (*(img -> ptr + i) == NULL) {
            if (err_code != NULL) {
                *err_code = 4;
            }
            destroy_image(&img);
            fclose(f_p);
            return NULL;
        }
    }

    fseek(f_p, init, SEEK_SET);
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            fscanf(f_p, "%d", &a);
            *(*(img -> ptr + i) + j) = a;
        }
    }

    if (err_code != NULL) {
        *err_code = 0;
    }
    fclose(f_p);
    return img;
}

void destroy_image(struct image_t **m) {
    if (m != NULL && (*m) -> ptr != NULL && (*m) -> width > 0 && (*m) -> height > 0) {
        for (int i = 0; i < (*m) -> height; i++) {
            if (*((*m) -> ptr + i) != NULL) {
                free(*((*m) -> ptr + i));
            }
        }
        free((*m) -> ptr);
        (*m) -> ptr = NULL;
        free(*m);
        *m = NULL;
    }
}

const int* image_get_pixel(const struct image_t *img, int x, int y) {
    if (img == NULL || x < 0 || y < 0 || img -> width <= x || img -> height <= y) return NULL;

    const int a = *(*(img -> ptr + y) + x);
    const int *a_p = (const int *)&a;
    return (const int *)a_p;
}

int* image_set_pixel(struct image_t *img, int x, int y) {
    if (img == NULL || x < 0 || y < 0 || img -> width <= x || img -> height <= y) return NULL;

    int *a = (*(img -> ptr + y) + x);
    return (int *)a;
}

int draw_image(struct image_t *img, const struct image_t *src, int destx, int desty) {
    if (img == NULL || img -> ptr == NULL || img -> width <= 0 || img -> height <= 0 ||
        src == NULL || src -> ptr == NULL || src -> width <= 0 || src -> height <= 0 ||
        destx < 0 || desty < 0 || destx + src -> width > img -> width || desty + src -> height > img -> height) return 1;

    for (int i = 0; i < src -> height; i++) {
        for (int j = 0; j < src -> width; j++) {
            *(*(img -> ptr + (i + desty)) + (j + destx)) = *(*(src -> ptr + i) + j);
        }
    }

    return 0;
}

