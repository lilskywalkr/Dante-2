/*
 * Test dla zadania Zapis double do pliku
 * Autor testowanej odpowiedzi: Ronald Frangulyan
 * Test wygenerowano automatycznie o 2022-02-15 16:41:48.315929
 *
 * Debug: { { test|pprint } }
 */

#if !defined(_TESTED_DECLARATIONS_H_)
#define _TESTED_DECLARATIONS_H_

// Wymagane deklaracji testowanych funkcji oraz zapowiedzi typów/struktur,
// które muszą znajdować się w kodzie przesłanym przez Studenta


        union double_to_char_t;
        
        int load_double(union double_to_char_t *dtc, const char *filename);
        int save_double(const union double_to_char_t *dtc, const char *filename);
        

#endif // _TESTED_DECLARATIONS_H_