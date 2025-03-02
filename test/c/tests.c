#include <testutils.h>

CuSuite* get_arr_fill_suite();
CuSuite* get_free_suite();
CuSuite* get_new_suite();
CuSuite* get_move_suite();
CuSuite* get_eval_suite();
CuSuite* get_set_knots_suite();
CuSuite* get_insert_knot_suite();
CuSuite* get_sample_suite();
CuSuite* get_to_beziers_suite();
CuSuite* get_interpolation_suite();
CuSuite* get_derive_suite();
CuSuite* get_bisect_suite();
CuSuite* get_save_load_suite();
CuSuite* get_elevate_degree_suite();
CuSuite* get_align_suite();

int main()
{
	int fails;
	CuString *output = CuStringNew();
	CuSuite* suite = CuSuiteNew();

	CuSuiteAddSuite(suite, get_arr_fill_suite());
	CuSuiteAddSuite(suite, get_free_suite());
	CuSuiteAddSuite(suite, get_new_suite());
	CuSuiteAddSuite(suite, get_move_suite());
	CuSuiteAddSuite(suite, get_eval_suite());
	CuSuiteAddSuite(suite, get_set_knots_suite());
	CuSuiteAddSuite(suite, get_insert_knot_suite());
	CuSuiteAddSuite(suite, get_sample_suite());
	CuSuiteAddSuite(suite, get_to_beziers_suite());
	CuSuiteAddSuite(suite, get_interpolation_suite());
	CuSuiteAddSuite(suite, get_derive_suite());
	CuSuiteAddSuite(suite, get_bisect_suite());
	CuSuiteAddSuite(suite, get_save_load_suite());
	CuSuiteAddSuite(suite, get_elevate_degree_suite());
	CuSuiteAddSuite(suite, get_align_suite());

	CuSuiteRun(suite);
	CuSuiteSummary(suite, output);
	CuSuiteDetails(suite, output);
	printf("%s\n", output->buffer);
	fails = suite->failCount;

	CuStringDelete(output);
	CuSuiteDelete(suite);

	return fails? EXIT_FAILURE : EXIT_SUCCESS;
}
