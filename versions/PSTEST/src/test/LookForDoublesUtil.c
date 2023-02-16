/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LookForDoublesUtil.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 13:31:02 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/24 13:31:04 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CuTest.h"

void	Test_LookingForDoubles_NoDoubles(CuTest *tc)
{
	int input[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int actual = ft_look_for_doubles(input, 10);
	int expected = 0;
	CuAssertIntEquals(tc, expected, actual);
}

void	Test_LookingForDoubles_Zero(CuTest *tc)
{
	int input[10] = {0, 2, 3, 4, 5, 6, 0, 8, 9, 10};
	int actual = ft_look_for_doubles(input, 10);
	int expected = 0;
	CuAssertIntEquals(tc, expected, actual);
}

void	Test_LookingForDoubles_NegativePositiveZero(CuTest *tc)
{
	int input[10] = {0, 2, 3, 4, 5, 6, 7, 8, 9, -0};
	int actual = ft_look_for_doubles(input, 10);
	int expected = 0;
	CuAssertIntEquals(tc, expected, actual);
}

CuSuite *LookForDoublesUtilGetSuite()
{
	CuSuite *suite = CuSuiteNew();

	SUITE_ADD_TEST(suite, Test_LookingForDoubles_NoDoubles);
	SUITE_ADD_TEST(suite, Test_LookingForDoubles_Zero);
	SUITE_ADD_TEST(suite, Test_LookingForDoubles_NegativePositiveZero);
	return (suite);
}
