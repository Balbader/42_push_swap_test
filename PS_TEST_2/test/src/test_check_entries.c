/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_check_entries.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 10:18:50 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/21 10:18:58 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unity.h"
#include "unity_fixture.h"
#include "push_swap.h"

static int	ft_test_check_entry(char *str)
{
	int	res;

	res = ft_check_entry(str);
	if (res == 0)
		return (res);
	else
		return (1);
}

TEST_GROUP(checkEntries);

TEST_SETUP(checkEntries)
{
}

TEST_TEARDOWN(checkEntries)
{
}

TEST(checkEntries, zero)
{
	TEST_ASSERT_EQUAL(0, ft_test_check_entry("0"));
}

TEST(checkEntries, A)
{
	TEST_ASSERT_EQUAL(1, ft_test_check_entry("A"));
}

TEST(checkEntries, space)
{
	TEST_ASSERT_EQUAL(1, ft_test_check_entry(" "));
}

TEST(checkEntries, largeSpace)
{
	TEST_ASSERT_EQUAL(1, ft_test_check_entry("       "));
}

TEST(checkEntries, positiveNumber)
{
	TEST_ASSERT_EQUAL(0, ft_test_check_entry("12345678"));
}

TEST(checkEntries, negativeNumber)
{
	TEST_ASSERT_EQUAL(0, ft_test_check_entry("-12345678"));
}

TEST(checkEntries, lettersNumbers)
{
	TEST_ASSERT_EQUAL(1, ft_test_check_entry("abc12345678"));
}
