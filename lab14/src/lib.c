uint8_t* get_search_letters(mailbox_t* mailbox, char* name) {
    uint8_t* index = calloc(LETTERS_COUNT, sizeof(uint8_t));
    for (size_t i = 0; i < LETTERS_COUNT; i++) {
        if (strcmp(mailbox->letters[i].sender.name, name) == 0) {
            index[i] = i + 1;
        } else {
            index[i] = 0;
        }
    }
    return index;
}

void show_letters(uint8_t* index) {
    for (size_t i = 0; i < LETTERS_COUNT; i++) {
        if (index[i] != 0) {
            printf("This is letter %d\n", index[i]);
        }
    }