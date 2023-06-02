#define SIZE 256

#define ROWS 2
#define COLS 2

#define PATH "./assets/input.txt"
#define OPEN_FILE_ERROR -3 

#include <locale.h>
#include <stdlib.h>
#include <stdio.h>

void display_info();
void fill_matrix(int **m);
void print_matrix(int **m);
void free_matrix(int **m);
int **get_matrix();
int **add_matrix(int **a, int **b);