/*
 * Test dla zadania Liczb zespolonych ciąg dalszy
 * Autor testowanej odpowiedzi: Ronald Frangulyan
 * Test wygenerowano automatycznie o 2022-02-06 00:59:34.286255
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
        
        int add(const struct complex_t *first, const struct complex_t *second, struct complex_t* result);
        int subtract(const struct complex_t *first, const struct complex_t *second, struct complex_t* result);
        int multiply(const struct complex_t *first, const struct complex_t *second, struct complex_t* result);
        int divide(const struct complex_t *first, const struct complex_t *second, struct complex_t* result);
        
        int read(struct complex_t* cp);
        

#endif // _TESTED_DECLARATIONS_H_