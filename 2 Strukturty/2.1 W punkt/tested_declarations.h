/*
 * Test dla zadania W punkt
 * Autor testowanej odpowiedzi: Ronald Frangulyan
 * Test wygenerowano automatycznie o 2022-01-04 20:12:59.753753
 *
 * Debug: { { test|pprint } }
 */

#if !defined(_TESTED_DECLARATIONS_H_)
#define _TESTED_DECLARATIONS_H_

// Wymagane deklaracji testowanych funkcji oraz zapowiedzi typów/struktur,
// które muszą znajdować się w kodzie przesłanym przez Studenta


        struct point_t;

        struct point_t* set(struct point_t* p, int x, int y);
        struct point_t* read(struct point_t* p);
        float distance(const struct point_t* p1, const struct point_t* p2, int *err_code);
        void show(const struct point_t* p);
        

#endif // _TESTED_DECLARATIONS_H_