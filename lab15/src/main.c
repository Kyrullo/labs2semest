#include "./lib.h"

int main (int argc, int argv) {

    FILE* in = fopen(PATH, "r");
    if(in == NULL) {
      fprintf(stderr, "Openning file error!\n");
      exit(OPEN_FILE_ERROR);
    }
    char info[LETTERS_COUNT];
    while(fgets(info, LETTERS_COUNT, fp)!= NULL){
    fprintf(stdout, "%s\n", info);
    }
    }

uint8_t index[i];

get_show (search_letters("Yan", &mailbox));
    fclose(in);
    return 0;
}