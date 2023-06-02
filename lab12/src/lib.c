int main() {
    FILE* fp = fopen("./assets/input.txt", "r");
    if (fp == NULL) {
        fprintf(stderr, "Error with FILE* fp opening!..\n");
        return -1;
    }

    char text[LENGTH] = "";
    char line[LENGTH];
    while (fgets(line, LENGTH, fp) != NULL) {
        strcat(text, line);
    }
    int length = strlen(text);

    int min_length = get_Min_Length(text, length);
    int max_length = get_Max_Length(text, length);

    printf("Min length is %d\n", min_length);
    printf("Max length is %d\n", max_length);

    fclose(fp);
    return 0;
}

int get_Min_Length(char* text, int length) {
    int min_length = LENGTH;
    int count = 0;

    for (int i = 0; i < length + 1; i++) {
        int current_length = count;
        count++;

        if (text[i] == ' ' || text[i] == '\n' || text[i] == '\0') {
            count = 0;

            if (min_length > current_length) {
                min_length = current_length;
            }
        }
    }

    return min_length;
}