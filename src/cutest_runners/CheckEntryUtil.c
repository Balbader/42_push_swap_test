/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CheckEntryUtil.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 11:32:14 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/24 11:32:26 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CuTest.h"

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


CuSuite *CheckEntryUtilGetSuite()
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
	SUITE_ADD_TEST(suite, Test_CheckEntry_SingleSpace);
	SUITE_ADD_TEST(suite, Test_CheckEntry_ManySpaces);
	SUITE_ADD_TEST(suite, Test_CheckEntry_PlusMinusNumbers);
	SUITE_ADD_TEST(suite, Test_CheckEntry_PlusMinusLetters);
	SUITE_ADD_TEST(suite, Test_CheckEntry_PlusMinusNumbersLetters);
	SUITE_ADD_TEST(suite, Test_CheckEntry_PlusMinusLettersNumbers);
	return (suite);
}
