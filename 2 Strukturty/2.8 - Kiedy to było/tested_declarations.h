/*
 * Test dla zadania Kiedy to było?
 * Autor testowanej odpowiedzi: Ronald Frangulyan
 * Test wygenerowano automatycznie o 2022-02-05 21:15:07.910562
 *
 * Debug: { { test|pprint } }
 */

#if !defined(_TESTED_DECLARATIONS_H_)
#define _TESTED_DECLARATIONS_H_

// Wymagane deklaracji testowanych funkcji oraz zapowiedzi typów/struktur,
// które muszą znajdować się w kodzie przesłanym przez Studenta


        struct date_t;

        struct date_t* set_date(struct date_t* d, int day, int month, int year, int *err_code);
        void show(const struct date_t* d);
        struct date_t* read(struct date_t* d, int *err_code);
        int validate(const struct date_t* d);
        

#endif // _TESTED_DECLARATIONS_H_