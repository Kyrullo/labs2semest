#include <stdio.h>

void get_Pyramid(FILE* in, FILE* out) {
    int offset = 0;
    int size = fgetc(in) - '0';

    for (int i = 0; i < size; i++) {

        for (int j = size - 1 - i; j > 0; j--) {
            fputs(" ", out);
        }

        for (int j = 0; j <= i + offset; j++) {
            fputs("*", out);
        }

        fputs("\n", out);
        offset++;
    }
}