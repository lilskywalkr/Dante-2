/*
 * Test dla zadania Figury geometryczne
 * Autor testowanej odpowiedzi: Ronald Frangulyan
 * Test wygenerowano automatycznie o 2022-02-18 00:52:02.222622
 *
 * Debug: { { test|pprint } }
 */

#if !defined(_TESTED_DECLARATIONS_H_)
#define _TESTED_DECLARATIONS_H_

// Wymagane deklaracji testowanych funkcji oraz zapowiedzi typów/struktur,
// które muszą znajdować się w kodzie przesłanym przez Studenta



        struct point_t;
        
        struct rectangle_t;
        struct circle_t;
        struct triangle_t;
        
        struct figure_t;
        
        float area_triangle(const struct triangle_t *t);
        float area_rectangle(const struct rectangle_t *r);
        float area_circle(const struct circle_t *c);
        float area_figure(const struct figure_t *f);
        
        void display_rectangle(const struct rectangle_t *rect);
        void display_triangle(const struct triangle_t *t);
        void display_circle(const struct circle_t *circ);
        
        void display_figure(struct figure_t *f);
        int sort_by_area(struct figure_t **figures, int size);
        

#endif // _TESTED_DECLARATIONS_H_