/*
 * Test dla zadania Makra i struktury
 * Autor testowanej odpowiedzi: Ronald Frangulyan
 * Test wygenerowano automatycznie o 2022-05-22 19:25:38.932621
 *
 * Debug: { { test|pprint } }
 */

#if !defined(_TESTED_DECLARATIONS_H_)
#define _TESTED_DECLARATIONS_H_

// Wymagane deklaracji testowanych funkcji oraz zapowiedzi typów/struktur,
// które muszą znajdować się w kodzie przesłanym przez Studenta


                          
        #include <inttypes.h>
                          
        #include "functions.h"
        
        struct array_int_t *create_array_int(int size);
        void free_array_int(struct array_int_t *array);
        int sort_array_int(struct array_int_t *array);
        int load_array_int(struct array_int_t **array, const char *filename);
        int save_array_int(const struct array_int_t *array, const char *filename);

        struct array_double_t *create_array_double(int size);
        void free_array_double(struct array_double_t *array);
        int sort_array_double(struct array_double_t *array);
        int load_array_double(struct array_double_t **array, const char *filename);
        int save_array_double(const struct array_double_t *array, const char *filename);

    

#endif // _TESTED_DECLARATIONS_H_