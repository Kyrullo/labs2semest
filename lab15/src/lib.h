#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PATH "./assets/input.txt"
#define OPEN_FILE_ERROR -3
#define LETTERS_COUNT 5

typedef enum cod { UTF8, UTF16, CP1251 } cod_t;

typedef enum sign { ! , ? . : ; - } sign_t;

typedef enum number { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 } number_t;

typedef struct box {
char *del;
char *first;
} box_t;

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
bool is_secret;
} letters_t;

typedef struct mailbox {
char letters[LETTERS_COUNT]; 
} mailbox_t;

get_search_letters (mailbox_t *mailbox, char *name);

int delete_letters(box_ *del, box_t *first);

get_secret_letters (mailbox_t *mailbox, bool is_secret, sign_t sign, number_t number);

void show_letters (uint8_t index[i]);