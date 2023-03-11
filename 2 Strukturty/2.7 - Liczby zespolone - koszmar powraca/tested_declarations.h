/*
 * Test dla zadania Liczby zespolone - koszmar powraca
 * Autor testowanej odpowiedzi: Ronald Frangulyan
 * Test wygenerowano automatycznie o 2022-02-05 16:58:07.329381
 *
 * Debug: { { test|pprint } }
 */

#if !defined(_TESTED_DECLARATIONS_H_)
#define _TESTED_DECLARATIONS_H_

// Wymagane deklaracji testowanych funkcji oraz zapowiedzi typów/struktur,
// które muszą znajdować się w kodzie przesłanym przez Studenta


        struct complex_t;

        struct complex_t* set(struct complex_t* cp, float re, float im, int *err_code);
        void show(const struct complex_t* cp);        
        float complex_abs(struct complex_t* cp, int * err_code);
        

#endif // _TESTED_DECLARATIONS_H_