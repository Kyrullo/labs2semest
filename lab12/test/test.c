#include "../src/lib.h"
#include <check.h>

START_TEST(test_slov) {
	char* input_data = I am fan is football club Barcelona;
	char* expected_values_get_Min_Length = 1;
	char* actual_value_get_Min_Length = (input_data);
char* expected_values_get_Max_Length = 9;
	char* actual_value_get_Max_Length(input_data);
	ck_assert_str_eq_min(expected_values_get_Min_Length, actual_value_get_Min_Length);
ck_assert_str_eq_max(expected_values_get_Max_Length, actual_value_get_Max_Length);
}
END_TEST


int main(void) {
	Suite *s = suite_create("Programing");
	TCase *tc_core = tcase_create("Lab12");

	tcase_add_test(tc_core, test_get_num);
	suite_add_tcase(s, tc_core);

	SRunner *sr = srunner_create(s);
	srunner_run_all(sr, CK_VERBOSE);
	int number_failed = srunner_ntests_failed(sr);
	srunner_free(sr);

	return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}*/