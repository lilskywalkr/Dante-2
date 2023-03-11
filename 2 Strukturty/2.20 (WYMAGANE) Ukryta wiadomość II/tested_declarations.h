/*
 * Test dla zadania Ukryta wiadomość II
 * Autor testowanej odpowiedzi: Ronald Frangulyan
 * Test wygenerowano automatycznie o 2022-02-09 22:04:56.711553
 *
 * Debug: { { test|pprint } }
 */

#if !defined(_TESTED_DECLARATIONS_H_)
#define _TESTED_DECLARATIONS_H_

// Wymagane deklaracji testowanych funkcji oraz zapowiedzi typów/struktur,
// które muszą znajdować się w kodzie przesłanym przez Studenta



            struct message_t;
            int decode_message(const struct message_t *cp, int size, char *msg, int text_size);
            int load_data(struct message_t *cp, int size, const char *filename);


    

#endif // _TESTED_DECLARATIONS_H_