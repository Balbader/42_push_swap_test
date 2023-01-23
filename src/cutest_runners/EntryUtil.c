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

void	Test_CheckEntry_SingleSpace(CuTest *tc)
{
	char *input = ft_strdup(" ");
	int actual = ft_check_entry(input);
	int expected = 0;
	CuAssertIntEquals(tc, expected, actual);
}

void	Test_CheckEntry_ManySpaces(CuTest *tc)
{
	char *input = ft_strdup("                 ");
	int actual = ft_check_entry(input);
	int expected = 0;
	CuAssertIntEquals(tc, expected, actual);
}

void	Test_CheckEntry_PlusMinusNumbers(CuTest *tc)
{
	char *input = ft_strdup("+-1234");
	int actual = ft_check_entry(input);
	int expected = 0;
	CuAssertIntEquals(tc, expected, actual);
}

void	Test_CheckEntry_PlusMinusLetters(CuTest *tc)
{
	char *input = ft_strdup("+-abcd");
	int actual = ft_check_entry(input);
	int expected = 0;
	CuAssertIntEquals(tc, expected, actual);
}

void	Test_CheckEntry_PlusMinusNumbersLetters(CuTest *tc)
{
	char *input = ft_strdup("+-1234abcd");
	int actual = ft_check_entry(input);
	int expected = 0;
	CuAssertIntEquals(tc, expected, actual);
}

void	Test_CheckEntry_PlusMinusLettersNumbers(CuTest *tc)
{
	char *input = ft_strdup("+-abcd1234");
	int actual = ft_check_entry(input);
	int expected = 0;
	CuAssertIntEquals(tc, expected, actual);
}
/*-------------------------------------------------------------------------*
 * ft_convert_entry Test
 *-------------------------------------------------------------------------*/
void	Test_ConvertEntry_SingleDigit_Zero(CuTest *tc)
{
	char *input = ft_strdup("0");
	int actual = ft_convert_entry(input);
	int expected = atoi("0");
	CuAssertIntEquals(tc, expected, actual);
}

void	Test_ConvertEntry_SingleDigit_Zero_Negative(CuTest *tc)
{
	char *input = ft_strdup("-0");
	int actual = ft_convert_entry(input);
	int expected = atoi("-0");
	CuAssertIntEquals(tc, expected, actual);
}

void	Test_ConvertEntry_SingleDigit_One(CuTest *tc)
{
	char *input = ft_strdup("1");
	int actual = ft_convert_entry(input);
	int expected = atoi("1");
	CuAssertIntEquals(tc, expected, actual);
}

void	Test_ConvertEntry_SingleDigit_One_Negative(CuTest *tc)
{
	char *input = ft_strdup("-1");
	int actual = ft_convert_entry(input);
	int expected = atoi("-1");
	CuAssertIntEquals(tc, expected, actual);
}

void	Test_ConvertEntry_DoubleDigit_Ten(CuTest *tc)
{
	char *input = ft_strdup("10");
	int actual = ft_convert_entry(input);
	int expected = atoi("10");
	CuAssertIntEquals(tc, expected, actual);
}

void	Test_ConvertEntry_DoubleDigit_Ten_Negative(CuTest *tc)
{
	char *input = ft_strdup("-10");
	int actual = ft_convert_entry(input);
	int expected = atoi("-10");
	CuAssertIntEquals(tc, expected, actual);
}

void	Test_ConvertEntry_RandomDigit(CuTest *tc)
{
	char *input = ft_strdup("123");
	int actual = ft_convert_entry(input);
	int expected = atoi("123");
	CuAssertIntEquals(tc, expected, actual);
}

void	Test_ConvertEntry_RandomDigit_Negative(CuTest *tc)
{
	char *input = ft_strdup("-123");
	int actual = ft_convert_entry(input);
	int expected = atoi("-123");
	CuAssertIntEquals(tc, expected, actual);
}

void	Test_ConvertEntry_IntMax(CuTest *tc)
{
	char *input = ft_strdup("2147483647");
	int actual = ft_convert_entry(input);
	int expected = atoi("2147483647");
	CuAssertIntEquals(tc, expected, actual);
}

void	Test_ConvertEntry_IntMin(CuTest *tc)
{
	char *input = ft_strdup("-2147483648");
	int actual = ft_convert_entry(input);
	int expected = atoi("-2147483648");
	CuAssertIntEquals(tc, expected, actual);
}

void	Test_ConvertEntry_GreaterIntMax(CuTest *tc)
{
	char *input = ft_strdup("214748364783647");
	int actual = ft_convert_entry(input);
	int expected = atoi("214748364783647");
	CuAssertIntEquals(tc, expected, actual);
}

void	Test_ConvertEntry_LowerIntMin(CuTest *tc)
{
	char *input = ft_strdup("-21474836483648");
	int actual = ft_convert_entry(input);
	int expected = atoi("-21474836483648");
	CuAssertIntEquals(tc, expected, actual);
}

void	Test_ConvertEntry_GreaterIntMax_WithSpaces(CuTest *tc)
{
	char *input = ft_strdup("        214748364783647");
	int actual = ft_convert_entry(input);
	int expected = atoi("        214748364783647");
	CuAssertIntEquals(tc, expected, actual);
}

void	Test_ConvertEntry_LowerIntMin_WithSpaces(CuTest *tc)
{
	char *input = ft_strdup("        -21474836483648");
	int actual = ft_convert_entry(input);
	int expected = atoi("        -21474836483648");
	CuAssertIntEquals(tc, expected, actual);
}

void	Test_ConvertEntry_GreaterIntMax_WithSpaces_Plus(CuTest *tc)
{
	char *input = ft_strdup("        +214748364783647");
	int actual = ft_convert_entry(input);
	int expected = atoi("        +214748364783647");
	CuAssertIntEquals(tc, expected, actual);
}




















CuSuite *CuGetSuite()
{
	CuSuite *suite = CuSuiteNew();

	// Test_CheckEntry =========================================================
	SUITE_ADD_TEST(suite, Test_CheckEntry_SingleDigit);
	SUITE_ADD_TEST(suite, Test_CheckEntry_SingleDigit_Negative);
	SUITE_ADD_TEST(suite, Test_CheckEntry_DoubleDigit);
	SUITE_ADD_TEST(suite, Test_CheckEntry_DoubleDigit_Negative);
	SUITE_ADD_TEST(suite, Test_CheckEntry_Float);
	SUITE_ADD_TEST(suite, Test_CheckEntry_Float_Negative);
	SUITE_ADD_TEST(suite, Test_CheckEntry_SingleChar);
	SUITE_ADD_TEST(suite, Test_CheckEntry_DoubleChar);
	SUITE_ADD_TEST(suite, Test_CheckEntry_SingleSpace);
	SUITE_ADD_TEST(suite, Test_CheckEntry_ManySpaces);
	SUITE_ADD_TEST(suite, Test_CheckEntry_PlusMinusNumbers);
	SUITE_ADD_TEST(suite, Test_CheckEntry_PlusMinusLetters);
	SUITE_ADD_TEST(suite, Test_CheckEntry_PlusMinusNumbersLetters);
	SUITE_ADD_TEST(suite, Test_CheckEntry_PlusMinusLettersNumbers);

	// Test_ConvertEntry =======================================================
	SUITE_ADD_TEST(suite, Test_ConvertEntry_SingleDigit_Zero);
	SUITE_ADD_TEST(suite, Test_ConvertEntry_SingleDigit_Zero_Negative);
	SUITE_ADD_TEST(suite, Test_ConvertEntry_SingleDigit_One);
	SUITE_ADD_TEST(suite, Test_ConvertEntry_SingleDigit_One_Negative);
	SUITE_ADD_TEST(suite, Test_ConvertEntry_DoubleDigit_Ten);
	SUITE_ADD_TEST(suite, Test_ConvertEntry_DoubleDigit_Ten_Negative);
	SUITE_ADD_TEST(suite, Test_ConvertEntry_RandomDigit);
	SUITE_ADD_TEST(suite, Test_ConvertEntry_RandomDigit_Negative);
	SUITE_ADD_TEST(suite, Test_ConvertEntry_IntMax);
	SUITE_ADD_TEST(suite, Test_ConvertEntry_IntMin);
	SUITE_ADD_TEST(suite, Test_ConvertEntry_GreaterIntMax);
	SUITE_ADD_TEST(suite, Test_ConvertEntry_LowerIntMin);
	SUITE_ADD_TEST(suite, Test_ConvertEntry_GreaterIntMax_WithSpaces);
	SUITE_ADD_TEST(suite, Test_ConvertEntry_LowerIntMin_WithSpaces);
	SUITE_ADD_TEST(suite, Test_ConvertEntry_GreaterIntMax_WithSpaces_Plus);

	return (suite);
}
