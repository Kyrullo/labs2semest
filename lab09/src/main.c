#include "./lib.h"

int main() {
    char* name = NAME;
    printf("Nick is %s\n", get_nick(name));
    free(get_nick(name)); 
    return 0;
}