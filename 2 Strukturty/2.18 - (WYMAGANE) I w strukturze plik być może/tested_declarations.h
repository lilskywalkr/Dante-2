/*
 * Test dla zadania I w strukturze plik być może
 * Autor testowanej odpowiedzi: Ronald Frangulyan
 * Test wygenerowano automatycznie o 2022-02-07 20:32:08.093585
 *
 * Debug: { { test|pprint } }
 */

#if !defined(_TESTED_DECLARATIONS_H_)
#define _TESTED_DECLARATIONS_H_

// Wymagane deklaracji testowanych funkcji oraz zapowiedzi typów/struktur,
// które muszą znajdować się w kodzie przesłanym przez Studenta


            struct file_t;
            
            int open_file(struct file_t*, const char *filename);
            struct file_t* find_min(const struct file_t*, int size);
            void close_file(struct file_t* f);        
    

#endif // _TESTED_DECLARATIONS_H_