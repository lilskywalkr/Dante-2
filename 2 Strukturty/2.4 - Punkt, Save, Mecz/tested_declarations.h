/*
 * Test dla zadania Punkt, Save, Mecz
 * Autor testowanej odpowiedzi: Ronald Frangulyan
 * Test wygenerowano automatycznie o 2022-01-04 21:56:04.070295
 *
 * Debug: { { test|pprint } }
 */

#if !defined(_TESTED_DECLARATIONS_H_)
#define _TESTED_DECLARATIONS_H_

// Wymagane deklaracji testowanych funkcji oraz zapowiedzi typów/struktur,
// które muszą znajdować się w kodzie przesłanym przez Studenta


        struct point_t;

        struct point_t* set(struct point_t* p, int x, int y);
        void show(const struct point_t* p);
                        
        int save_point_b(const char *filename, const struct point_t* p);
        int load_point_b(const char *filename, struct point_t* p);
        int save_point_t(const char *filename, const struct point_t* p);
        int load_point_t(const char *filename, struct point_t* p);
        

#endif // _TESTED_DECLARATIONS_H_