/*
 * Test dla zadania Odcinek
 * Autor testowanej odpowiedzi: Ronald Frangulyan
 * Test wygenerowano automatycznie o 2022-02-05 15:49:40.805726
 *
 * Debug: { { test|pprint } }
 */

#if !defined(_TESTED_DECLARATIONS_H_)
#define _TESTED_DECLARATIONS_H_

// Wymagane deklaracji testowanych funkcji oraz zapowiedzi typów/struktur,
// które muszą znajdować się w kodzie przesłanym przez Studenta


        struct segment_t;
        struct point_t;
        
        struct segment_t* read_segment(struct segment_t* p);
        void show_segment(const struct segment_t* p);
        float length(const struct segment_t* s, int *err_code);
        

#endif // _TESTED_DECLARATIONS_H_