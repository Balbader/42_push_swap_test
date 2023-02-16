/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConvertEntryUtil.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 11:32:47 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/24 11:32:49 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CuTest.h"

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

CuSuite *ConvertEntryUtilGetSuite()
{
	CuSuite *suite = CuSuiteNew();

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
