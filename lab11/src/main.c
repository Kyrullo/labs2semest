
int main() {
    setlocale(LC_ALL, "");
    display_info();
    int **a = get_matrix();
    fill_matrix(a);
    int **b = get_matrix();
    fill_matrix(b);
    int **c = add_matrix(a, b);
    print_matrix(c);
    free_matrix(a);
    free_matrix(b);
    free_matrix(c);
    return 0;
}