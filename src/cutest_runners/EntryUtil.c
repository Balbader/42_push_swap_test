#include "CuTest.h"

// *---------------------------------------------------------------------------*
// * ft_check_entry Test													   *
// *---------------------------------------------------------------------------*

// * Numbers ------------------------------------------------------------------*
void	TestCuCheckEntry_SingleDigit(CuTest *tc)
{
	char *input = ft_strdup("1");
	int actual = ft_check_entry(input);
	int expected = 0;
	CuAssertIntEquals(tc, expected, actual);
}

void	TestCuCheckEntry_NegativeSingleDigit(CuTest *tc)
{
	char *input = ft_strdup("-1");
	int actual = ft_check_entry(input);
	int expected = 0;
	CuAssertIntEquals(tc, expected, actual);
}

void	TestCuCheckEntry_DoubleDigit(CuTest *tc)
{
	char *input = ft_strdup("12");
	int actual = ft_check_entry(input);
	int expected = 0;
	CuAssertIntEquals(tc, expected, actual);
}

void	TestCuCheckEntry_NegativeDoubleDigit(CuTest *tc)
{
	char *input = ft_strdup("12");
	int actual = ft_check_entry(input);
	int expected = 0;
	CuAssertIntEquals(tc, expected, actual);
}

void	TestCuCheckEntry_Float(CuTest *tc)
{
	char *input = ft_strdup("1.2");
	int actual = ft_check_entry(input);
	int expected = 0;
	CuAssertIntEquals(tc, expected, actual);
}

void	TestCuCheckEntry_NegativeFloat(CuTest *tc)
{
	char *input = ft_strdup("-1.2");
	int actual = ft_check_entry(input);
	int expected = 0;
	CuAssertIntEquals(tc, expected, actual);
}

// * Characters ---------------------------------------------------------------*
void	TestCuCheckEntry_SingleChar(CuTest *tc)
{
	char *input = ft_strdup("A");
	int actual = ft_check_entry(input);
	int expected = 0;
	CuAssertIntEquals(tc, expected, actual);
}

void	TestCuCheckEntry_DoubleChar(CuTest *tc)
{
	char *input = ft_strdup("AB");
	int actual = ft_check_entry(input);
	int expected = 0;
	CuAssertIntEquals(tc, expected, actual);
}



/*-------------------------------------------------------------------------*
 * ft_convert_entry Test
 *-------------------------------------------------------------------------*/
void	TestCuConvertEntry_SingleChar(CuTest *tc)
{
	char *input = ft_strdup("1");
	int actual = ft_convert_entry(input);
	int expected = 1;
	CuAssertIntEquals(tc, expected, actual);
}


CuSuite *CuGetSuite()
{
	CuSuite *suite = CuSuiteNew();
	SUITE_ADD_TEST(suite, TestCuCheckEntry_SingleDigit);
	SUITE_ADD_TEST(suite, TestCuCheckEntry_NegativeSingleDigit);
	SUITE_ADD_TEST(suite, TestCuCheckEntry_DoubleDigit);
	SUITE_ADD_TEST(suite, TestCuCheckEntry_NegativeDoubleDigit);
	SUITE_ADD_TEST(suite, TestCuCheckEntry_Float);
	SUITE_ADD_TEST(suite, TestCuCheckEntry_NegativeFloat);
	SUITE_ADD_TEST(suite, TestCuCheckEntry_SingleChar);
	SUITE_ADD_TEST(suite, TestCuCheckEntry_DoubleChar);


	SUITE_ADD_TEST(suite, TestCuConvertEntry_SingleChar);
	return (suite);
}
