/*
 * Test dla zadania Macierz
 * Autor testowanej odpowiedzi: Ronald Frangulyan
 * Test wygenerowano automatycznie o 2022-03-07 07:25:47.044596
 *
 * Debug: { { test|pprint } }
 */

#if !defined(_TESTED_DECLARATIONS_H_)
#define _TESTED_DECLARATIONS_H_

// Wymagane deklaracji testowanych funkcji oraz zapowiedzi typów/struktur,
// które muszą znajdować się w kodzie przesłanym przez Studenta


        struct matrix_t;

        int matrix_create(struct matrix_t *m, int width, int height);
        void matrix_destroy(struct matrix_t *m);
        void matrix_display(const struct matrix_t *m);
        int matrix_read(struct matrix_t *m);
    

#endif // _TESTED_DECLARATIONS_H_