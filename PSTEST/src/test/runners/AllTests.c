#include "CuTest.h"

CuSuite	*CheckEntryUtilGetSuite();
CuSuite	*ConvertEntryUtilGetSuite();
CuSuite	*StoreEntryUtilGetSuite();
CuSuite *CheckIntSizeUtilGetSuite();
CuSuite *LookForDoublesUtilGetSuite();

void	RunAllTests(void)
{
	CuString *output = CuStringNew();
	CuSuite *suite = CuSuiteNew();

	// CuSuiteAddSuite(suite, CheckEntryUtilGetSuite());
	// CuSuiteAddSuite(suite, ConvertEntryUtilGetSuite());
	// CuSuiteAddSuite(suite, StoreEntryUtilGetSuite());
	// CuSuiteAddSuite(suite, CheckIntSizeUtilGetSuite());
	CuSuiteAddSuite(suite, LookForDoublesUtilGetSuite());

	CuSuiteRun(suite);
	CuSuiteSummary(suite, output);
	CuSuiteDetails(suite, output);
	printf("%s\n", output->buffer);
}

int	main(void)
{

	RunAllTests();
	return (0);
}
