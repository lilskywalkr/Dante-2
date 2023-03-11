#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct point_t {
    int x;
    int y;
};

struct rectangle_t {
    struct point_t p;
    int width;
    int height;
};

struct circle_t {
    struct point_t c;
    float r;
};

struct triangle_t {
    struct point_t p1;
    struct point_t p2;
    struct point_t p3;
};

enum figure_types{
    TRIANGLE = 1,
    RECTANGLE,
    CIRCLE
};

struct figure_t{
    union
    {
        struct rectangle_t rect;
        struct triangle_t triangle;
        struct circle_t circ;
    };
    enum figure_types type;
};

#define MAX_ARR_SIZE 51

float area_triangle(const struct triangle_t *t);
float area_rectangle(const struct rectangle_t *r);
float area_circle(const struct circle_t *c);
float area_figure(const struct figure_t *f);

void display_rectangle(const struct rectangle_t *rect);
void display_triangle(const struct triangle_t *t);
void display_circle(const struct circle_t *circ);
void display_figure(struct figure_t *f);

int sort_by_area(struct figure_t **figures, int size);

int main() {
    int figure_type = 1, flag = 0, i = 0;
    struct figure_t arr[MAX_ARR_SIZE];
    struct figure_t* arr_p[MAX_ARR_SIZE];

    for (; i < MAX_ARR_SIZE && figure_type; i++) {
        if (i < MAX_ARR_SIZE - 1) {
            printf("Enter figure's type:");

            if (!scanf("%d", &figure_type)) {
                printf("Incorrect input");
                return 1;
            }

            while (getchar() != '\n');

            if (figure_type == 1) {
                printf("Enter vertices' coordinates of a triangle (x1 y1 x2 y2 x3 y3):");

                (arr + i)->type = figure_type;
                if (scanf("%d %d %d %d %d %d", &(arr + i)->triangle.p1.x, &(arr + i)->triangle.p1.y, &(arr + i)->triangle.p2.x, &(arr + i)->triangle.p2.y, &(arr + i)->triangle.p3.x, &(arr + i)->triangle.p3.y) != 6) {
                    printf("Incorrect input");
                    return 1;
                }

                while (getchar() != '\n');

                if (((arr + i)->triangle.p1.x == (arr + i)->triangle.p2.x && (arr + i)->triangle.p1.y == (arr + i)->triangle.p2.y) || ((arr + i)->triangle.p1.x == (arr + i)->triangle.p3.x && (arr + i)->triangle.p1.y == (arr + i)->triangle.p3.y) || ((arr + i)->triangle.p2.x == (arr + i)->triangle.p3.x && (arr + i)->triangle.p2.y == (arr + i)->triangle.p3.y)) {
                    flag = 1;
                }

            } else if (figure_type == 2) {
                printf("Enter coordinates of a rectangle along with its dimensions (x y width height):");

                (arr + i)->type = figure_type;
                if (scanf("%d %d %d %d", &(arr + i)->rect.p.x, &(arr + i)->rect.p.y, &(arr + i)->rect.width, &(arr + i)->rect.height) != 4) {
                    printf("Incorrect input");
                    return 1;
                }

                while (getchar() != '\n');

                if ((arr + i)->rect.width <= 0 || (arr + i)->rect.height <= 0) {
                    flag = 1;
                }

            } else if (figure_type == 3) {
                printf("Enter coordinates and radius of a circle:");

                (arr + i)->type = figure_type;
                if (scanf("%d %d %f", &(arr + i)->circ.c.x, &(arr + i)->circ.c.y, &(arr + i)->circ.r) != 3) {
                    printf("Incorrect input");
                    return 1;
                }

                while (getchar() != '\n');

                if ((arr + i)->circ.r <= 0) {
                    flag = 1;
                }

            } else if (figure_type != 0 && figure_type != 1 && figure_type != 2 && figure_type != 3) {
                printf("Incorrect input data");
                return 2;
            }
        }
    }

    if (flag) {
        printf("Incorrect input data");
        return 2;
    }

    for (int j = 0; j < i; j++) {
        *(arr_p + j) = (arr+j);
    }


    sort_by_area(arr_p, i-1);

    i += (i < 51 ? 0: -1);

    for (int j = 0; j < i; j++) {
        display_figure(*(arr_p + j));
    }

    return 0;
}

float area_triangle(const struct triangle_t *t) {
    if (t == NULL) return -1;

    if (((t->p1.x == t->p2.x && t->p1.y == t->p2.y) || (t->p2.x == t->p3.x && t->p2.y == t->p3.y)
    || (t->p1.x == t->p3.x && t->p1.y == t->p3.y))) return -1;

    float P = 0.0f;
    P = 0.5f * (float) abs(((t -> p2.x - t -> p1.x) * (t -> p3.y - t -> p1.y) - (t -> p2.y - t -> p1.y) * (t -> p3.x - t -> p1.x)));

    if (P <= 0) return -1;

    return P;
}

float area_rectangle(const struct rectangle_t *r) {
    if (r == NULL || r -> width <= 0 || r -> height <= 0) return -1;

    float P = 0.0f;
    P = (float)(r -> width * r -> height);
    if (P <= 0) return -1;

    return P;
}

float area_circle(const struct circle_t *c) {
    if (c == NULL || c -> r <= 0) return -1;

    float P = 0.0f;
    P = (float)(M_PI * pow(c -> r, 2));

    if (P <= 0) return -1;

    return P;
}

float area_figure(const struct figure_t *f) {
    if (f == NULL) return -1;

    float P = 0.0f;

    if (f -> type == TRIANGLE) {
        P = area_triangle(&(f->triangle));
    } else if (f -> type == RECTANGLE) {
        P = area_rectangle(&(f->rect));
    } else if (f -> type == CIRCLE) {
        P = area_circle(&(f->circ));
    } else return -1;

    return P;
}

void display_rectangle(const struct rectangle_t *rect) {
    if (rect != NULL) {
        printf("Rectangle (%d, %d), width = %d, height = %d\n", rect -> p.x, rect -> p.y, rect -> width, rect -> height);
    }
}

void display_triangle(const struct triangle_t *t) {
    if (t != NULL) {
        printf("Triangle p1(%d, %d), p2(%d, %d), p3(%d, %d)\n", t -> p1.x, t -> p1.y, t -> p2.x, t -> p2.y, t -> p3.x, t -> p3.y);
    }
}

void display_circle(const struct circle_t *circ) {
    if (circ != NULL) {
        printf("Circle (%d, %d), radius = %f\n", circ -> c.x, circ -> c.y, circ -> r);
    }
}

void display_figure(struct figure_t *f) {
    if (f != NULL) {
        switch (f->type) {
            case TRIANGLE:
                display_triangle((&f -> triangle));
                break;
            case RECTANGLE:
                display_rectangle((&f -> rect));
                break;
            case CIRCLE:
                display_circle((&f -> circ));
                break;
        }
    }
}

void swap(struct figure_t **f1, struct figure_t **f2) {
    struct figure_t *tmp = *f1;
    *f1 = *f2;
    *f2 = tmp;
}

int sort_by_area(struct figure_t **figures, int size) {
    if (figures == NULL || size <= 0) return 1;

    if (size == 1) {
        if (area_figure(*figures) == -1) return 1;
        else return 0;
    };

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (area_figure(*(figures + j)) <= 0 || area_figure(*(figures + j + 1)) <= 0) return 1;

            if ( area_figure(*(figures + j)) < area_figure(*(figures + j + 1)) ) {
                swap(figures+j, figures+j+1);
            }
        }
    }

    return 0;
}
