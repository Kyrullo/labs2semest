int get_Max_Length(char* text, int length) {
    int max_length = 0;
    int count = 0;

    for (int i = 0; i < length + 1; i++) {
        int current_length = count;
        count++;

        if (text[i] == ' ' || text[i] == '\n' || text[i] == '\0') {
            count = 0;

            if (max_length < current_length) {
                max_length = current_length;
            }
        }
    }

    return max_length;
}