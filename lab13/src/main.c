int main() {
    FILE* in = fopen("./assets/input.txt", "r");
    FILE* out = fopen("./dist/output.txt", "w");
    if (in == NULL || out == NULL) {
        return -1;
    }

    get_Pyramid(in, out);

    fclose(in);
    fclose(out);
    return 0;
}