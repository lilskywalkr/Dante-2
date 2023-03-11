/*
 * Test dla zadania Jeszcze więcej punktów
 * Autor testowanej odpowiedzi: Ronald Frangulyan
 * Test wygenerowano automatycznie o 2022-02-06 16:52:39.832067
 *
 * Debug: { { test|pprint } }
 */

#if !defined(_TESTED_DECLARATIONS_H_)
#define _TESTED_DECLARATIONS_H_

// Wymagane deklaracji testowanych funkcji oraz zapowiedzi typów/struktur,
// które muszą znajdować się w kodzie przesłanym przez Studenta


        struct point_t;

        int save_points_b(const char *filename, const struct point_t* p, unsigned int N);
        struct point_t* read(struct point_t* p);
        

#endif // _TESTED_DECLARATIONS_H_