#include "CuTest.h"

// *---------------------------------------------------------------------------*
// * ft_check_entry Test													   *
// *---------------------------------------------------------------------------*

// * Numbers ------------------------------------------------------------------*
void	Test_CheckEntry_SingleDigit(CuTest *tc)
{
	char *input = ft_strdup("1");
	int actual = ft_check_entry(input);
	int expected = 0;
	CuAssertIntEquals(tc, expected, actual);
}

void	Test_CheckEntry_SingleDigit_Negative(CuTest *tc)
{
	char *input = ft_strdup("-1");
	int actual = ft_check_entry(input);
	int expected = 0;
	CuAssertIntEquals(tc, expected, actual);
}

void	Test_CheckEntry_DoubleDigit(CuTest *tc)
{
	char *input = ft_strdup("12");
	int actual = ft_check_entry(input);
	int expected = 0;
	CuAssertIntEquals(tc, expected, actual);
}

void	Test_CheckEntry_DoubleDigit_Negative(CuTest *tc)
{
	char *input = ft_strdup("12");
	int actual = ft_check_entry(input);
	int expected = 0;
	CuAssertIntEquals(tc, expected, actual);
}

void	Test_CheckEntry_Float(CuTest *tc)
{
	char *input = ft_strdup("1.2");
	int actual = ft_check_entry(input);
	int expected = 0;
	CuAssertIntEquals(tc, expected, actual);
}

void	Test_CheckEntry_Float_Negative(CuTest *tc)
{
	char *input = ft_strdup("-1.2");
	int actual = ft_check_entry(input);
	int expected = 0;
	CuAssertIntEquals(tc, expected, actual);
}

// * Characters ---------------------------------------------------------------*
void	Test_CheckEntry_SingleChar(CuTest *tc)
{
	char *input = ft_strdup("A");
	int actual = ft_check_entry(input);
	int expected = 0;
	CuAssertIntEquals(tc, expected, actual);
}

void	Test_CheckEntry_DoubleChar(CuTest *tc)
{
	char *input = ft_strdup("AB");
	int actual = ft_check_entry(input);
	int expected = 0;
	CuAssertIntEquals(tc, expected, actual);
}


/*-------------------------------------------------------------------------*
 * ft_convert_entry Test
 *-------------------------------------------------------------------------*/
void	Test_ConvertEntry_SingleChar(CuTest *tc)
{
	char *input = ft_strdup("1");
	int actual = ft_convert_entry(input);
	int expected = 1;
	CuAssertIntEquals(tc, expected, actual);
}


CuSuite *CuGetSuite()
{
	CuSuite *suite = CuSuiteNew();
	SUITE_ADD_TEST(suite, Test_CheckEntry_SingleDigit);
	SUITE_ADD_TEST(suite, Test_CheckEntry_SingleDigit_Negative);
	SUITE_ADD_TEST(suite, Test_CheckEntry_DoubleDigit);
	SUITE_ADD_TEST(suite, Test_CheckEntry_DoubleDigit_Negative);
	SUITE_ADD_TEST(suite, Test_CheckEntry_Float);
	SUITE_ADD_TEST(suite, Test_CheckEntry_Float_Negative);
	SUITE_ADD_TEST(suite, Test_CheckEntry_SingleChar);
	SUITE_ADD_TEST(suite, Test_CheckEntry_DoubleChar);


	SUITE_ADD_TEST(suite, Test_ConvertEntry_SingleChar);
	return (suite);
}
