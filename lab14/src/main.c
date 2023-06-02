#include "./lib.h"

int main(int argc, char* argv[]) {
    FILE* in = fopen("./assets/input.txt", "r");
    if (in == NULL) {
        return -1;
    }

    mailbox_t mailbox = {
        .letters = {0},
    };

    uint8_t* index = get_search_letters(&mailbox, "Vlad");
    show_letters(index);
    free(index);

    fclose(in);
    return 0;
}