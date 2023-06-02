#include "../src/lib.h"
#include <check.h>

START_TEST(test) {
	
}
END_TEST

int main(void) {
	Suite *s = suite_create("Programing");
	TCase *tc_core = tcase_create("Lab21");

	tcase_add_test(tc_core, test_get_test);
	suite_add_tcase(s, tc_core);

	SRunner *sr = srunner_create(s);
	srunner_run_all(sr, CK_VERBOSE);
	int number_failed = srunner_ntests_failed(sr);
	srunner_free(sr);

	return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}