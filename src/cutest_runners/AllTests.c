#include "CuTest.h"

CuSuite	*EntryUtilGetSuite();
CuSuite	*ConvertUtilGetSuite();

void	RunAllTests(void)
{
	CuString *output = CuStringNew();
	CuSuite *suite = CuSuiteNew();

	// CuSuiteAddSuite(suite, EntryUtilGetSuite());
	CuSuiteAddSuite(suite, ConvertUtilGetSuite());
	// CuSuiteAddSuite(suite, StoreUtilGetSuite());

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
