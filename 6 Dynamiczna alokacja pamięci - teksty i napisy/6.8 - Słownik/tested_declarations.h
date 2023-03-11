/*
 * Test dla zadania Słownik
 * Autor testowanej odpowiedzi: Ronald Frangulyan
 * Test wygenerowano automatycznie o 2022-04-02 12:15:11.249430
 *
 * Debug: { { test|pprint } }
 */

#if !defined(_TESTED_DECLARATIONS_H_)
#define _TESTED_DECLARATIONS_H_

// Wymagane deklaracji testowanych funkcji oraz zapowiedzi typów/struktur,
// które muszą znajdować się w kodzie przesłanym przez Studenta


        #include "dictionary.h"
        
        struct word_count_t;
        struct dictionary_t;

        struct dictionary_t* create_dictionary(int N, int *err_code);
        void destroy_dictionary(struct dictionary_t** d);
        struct word_count_t* dictionary_find_word(const struct dictionary_t *d, const char *word);
        void dictionary_display(const struct dictionary_t *d);
        int dictionary_add_word(struct dictionary_t *d, const char *word);

    

#endif // _TESTED_DECLARATIONS_H_