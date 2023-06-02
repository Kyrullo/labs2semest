#include "./lib.h"

uint8_t * get_search_letters (mailbox_t *mailbox, char *name) {
uint8_t *index = calloc(LETTERS_COUNT, sizeof(uint8_t));
for (size_t i = 0; i < LETTERS_COUNT; i++) {
if (strcmp(mailbox->letters[i].sender.name, name) == 0) {
index[i] = i + 1;
} 
else 
index[i] = 0;
}
return index;
}



int delete_letters(box_t *del, box_t *first) {
box_t *t = (*box)->next;
box_t *buf;
if ( *first && *first != del ) {
while ( t && t->next != del ) t = t->next;
if ( t ) {
buf = t->next;
t->next = t->next->next;
free(buf);
return 0; 
}
else
return -1;
}
else if ( *first != del ) {
buf = del;
*first = del->next;
free(buf);
return 0;
}
else
return -1;
}



get_secret_letters (mailbox_t *mailbox, bool is_secret, sign_t *sign, number_t number) {
for (size_t i = 0; i < LETTERS_COUNT; i++) {
if (is_secret == true) {
number = "";
sign = "*";
printf("This is letter %d secret\n", is_secret);
}
}
return is_secret;
}



void show_letters (uint8_t *index) {
for (int i = 0; i < LETTERS_COUNT; i++) {
if (index[i] != 0)
printf("This is letter %d\n", index[i]);
}
}