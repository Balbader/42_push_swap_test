/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CheckIntSizeUtil.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 13:30:41 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/24 13:30:43 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CuTest.h"

void	Test_CheckIntSize_IntMax(CuTest *tc)
{
	int input = 2147483647;
	int actual = ft_check_int_size(input);
	int expected = 0;
	CuAssertIntEquals(tc, expected, actual);
}

void	Test_CheckIntSize_IntMin(CuTest *tc)
{
	int input = -2147483648;
	int actual = ft_check_int_size(input);
	int expected = 0;
	CuAssertIntEquals(tc, expected, actual);
}

void	Test_CheckIntSize_GreaterThanIntMax(CuTest *tc)
{
	long input = 2147483647123;
	int actual = ft_check_int_size(input);
	int expected = 0;
	CuAssertIntEquals(tc, expected, actual);
}

void	Test_CheckIntSize_LowerThanIntMin(CuTest *tc)
{
	long input = -2147483648123;
	int actual = ft_check_int_size(input);
	int expected = 0;
	CuAssertIntEquals(tc, expected, actual);
}

void	Test_CheckIntSize_PositiveInt(CuTest *tc)
{
	long input = 21474836;
	int actual = ft_check_int_size(input);
	int expected = 0;
	CuAssertIntEquals(tc, expected, actual);
}

void	Test_CheckIntSize_NegativeInt(CuTest *tc)
{
	long input = -21474836;
	int actual = ft_check_int_size(input);
	int expected = 0;
	CuAssertIntEquals(tc, expected, actual);
}

CuSuite *CheckIntSizeUtilGetSuite()
{
	CuSuite *suite = CuSuiteNew();

	SUITE_ADD_TEST(suite, Test_CheckIntSize_IntMax);
	SUITE_ADD_TEST(suite, Test_CheckIntSize_IntMin);
	SUITE_ADD_TEST(suite, Test_CheckIntSize_GreaterThanIntMax);
	SUITE_ADD_TEST(suite, Test_CheckIntSize_LowerThanIntMin);
	SUITE_ADD_TEST(suite, Test_CheckIntSize_PositiveInt);
	SUITE_ADD_TEST(suite, Test_CheckIntSize_NegativeInt);
	return (suite);
}
