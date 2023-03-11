/*
 * Test dla zadania Naprawdę duże liczby III
 * Autor testowanej odpowiedzi: Ronald Frangulyan
 * Test wygenerowano automatycznie o 2022-03-30 17:25:36.270300
 *
 * Debug: { { test|pprint } }
 */

#if !defined(_TESTED_DECLARATIONS_H_)
#define _TESTED_DECLARATIONS_H_

// Wymagane deklaracji testowanych funkcji oraz zapowiedzi typów/struktur,
// które muszą znajdować się w kodzie przesłanym przez Studenta


        #include "big_numbers.h"
        
        struct big_numbers_t ;

        int create_big_numbers(struct big_numbers_t **bn, int N);
        void destroy_big_numbers(struct big_numbers_t **bn);
        void display(const struct big_numbers_t *bn);
        int create(struct big_numbers_t *bn, int N);
        void destroy(struct big_numbers_t *bn);
        int add_big_number(struct big_numbers_t *bn, const char *big_number);

    

#endif // _TESTED_DECLARATIONS_H_