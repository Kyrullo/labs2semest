#include "./lib.h"



void display_info() {
    FILE *fp = fopen(PATH, "r");
    if (fp == NULL) {
        fprintf(stderr, "Opening file error!\n");
        exit(OPEN_FILE_ERROR);
    }
    char info[SIZE];
    while (fgets(info, SIZE, fp) != NULL) {
        fprintf(stdout, "%s\n", info);
    }
    fclose(fp);
}

void fill_matrix(int **m) {
    printf("Please enter matrix elements value:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            scanf("%d", &m[i][j]);
        }
    }
}

void print_matrix(int **m) {
    for (int i = 0; i < ROWS; i++) {
        printf("[ ");
        for (int j = 0; j < COLS; j++) {
            printf("%d ", m[i][j]);
        }
        printf("]\n");
    }
}

void free_matrix(int **m) {
    for (int i = 0; i < ROWS; i++) {
        free(m[i]);
    }
    free(m);
}

int **get_matrix() {
    int **m = malloc(ROWS * sizeof(int *));
    for (int i = 0; i < ROWS; i++) {
        m[i] = malloc(COLS * sizeof(int));
        for (int j = 0; j < COLS; j++) {
            m[i][j] = 0;
        }
    }
    return m;
}

int **add_matrix(int **a, int **b) {
    int **c = get_matrix();
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    return c;
}