/*
 * Test dla zadania Zbiory liczb - statystyka szczegółowa
 * Autor testowanej odpowiedzi: Ronald Frangulyan
 * Test wygenerowano automatycznie o 2022-03-19 21:15:49.641109
 *
 * Debug: { { test|pprint } }
 */

#if !defined(_TESTED_DECLARATIONS_H_)
#define _TESTED_DECLARATIONS_H_

// Wymagane deklaracji testowanych funkcji oraz zapowiedzi typów/struktur,
// które muszą znajdować się w kodzie przesłanym przez Studenta



        #include "format_type.h"

        struct statistic_t;
        
        int load(const char *filename, int ***ptr, enum save_format_t format);
        int statistics_row(int **ptr, struct statistic_t **stats);
        void destroy(int ***ptr);

        void display(int  **ptr);

    

#endif // _TESTED_DECLARATIONS_H_