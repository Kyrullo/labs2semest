#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LETTERS_COUNT 5

typedef enum cod { UTF8, UTF16, CP1251 } cod_t;

typedef struct sender {
    char name[32];
    char text[64];
} sender_t;

typedef struct recipient {
    char name[32];
    char text[64];
} recipient_t;

typedef struct letters {
    cod_t cod;
    sender_t sender;
    recipient_t recipient;
    char them[32];
    char text[128];
    bool is_note;
} letters_t;

typedef struct mailbox {
    letters_t letters[LETTERS_COUNT];
} mailbox_t;

uint8_t* get_search_letters(mailbox_t* mailbox, char* name);

void show_letters(uint8_t* index);