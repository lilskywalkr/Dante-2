/*
 * Test dla zadania Podwójnie skrzyżowane słowa
 * Autor testowanej odpowiedzi: Ronald Frangulyan
 * Test wygenerowano automatycznie o 2022-04-26 12:28:48.274733
 *
 * Debug: { { test|pprint } }
 */

#if !defined(_TESTED_DECLARATIONS_H_)
#define _TESTED_DECLARATIONS_H_

// Wymagane deklaracji testowanych funkcji oraz zapowiedzi typów/struktur,
// które muszą znajdować się w kodzie przesłanym przez Studenta


    
            int create_leading_word_cross(const char *first, const char *second, char ***result);
            int create_double_leading_word_cross(const char *first, const char *second, const char *third, const char *fourth, char ***result, char ***first_cross, char ***second_cross);
            void destroy(char **words);

    

#endif // _TESTED_DECLARATIONS_H_