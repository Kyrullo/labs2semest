#include "./lib.h"

char* get_nick(char* name) {
    char* nick = malloc((NAME_LENGTH + 1) * sizeof(char));
    for(int i = 0; i < NAME_LENGTH; i++) {
        if (name[i] == 'I' || name[i] == 'i') {
            nick[i] = '1';
        } else {
            nick[i] = name[i];
        }
    }
    nick[NAME_LENGTH] = '\0';
    return nick;
}
