#include "../src/lib.h"

#include <check.h>


START_TEST(test_add_matrix) {
	int** input_a = malloc(ROWS * sizeof(int*));
	int** input_b = malloc(ROWS * sizeof(int*));
	for (int i = 0, k = 1; i < ROWS; i++) {
		*(input_a + i) = malloc(COLS * sizeof(int));
		*(input_b + i) = malloc(COLS * sizeof(int));
		for (int j = 0; j < COLS; j++) {
			*(*(input_a + i) + j) = k;
			*(*(input_b + i) + j) = k + 1;
			k++;
		}
	}
	int** actual_c = add_Matrix(input_a, input_b);
	int   expected_c[][COLS] = { { 3, 5 }, { 7, 9 } };
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
		
	ck_assert_int_eq(*(*(expected_c + i) + j), *(*(actual_c + i) + j));
		}
	}
}
END_TEST


int main(void) {
	Suite* s = suite_create("programming-koval");
	TCase* tc_core = tcase_create("lab11");

	tcase_add_test(tc_core, test_add_matrix);
	suite_add_tcase(s, tc_core);

	SRunner* sr = srunner_create(s);
	srunner_run_all(sr, CK_VERBOSE);
	int err = srunner_ntests_failed(sr);
	srunner_free(sr);

	return (err == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}