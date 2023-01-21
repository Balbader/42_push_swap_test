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

static void	ft_test_check_entry(char *str)
{
	int	res;

	res = ft_check_entry(str);
	if (res == 0)
		ft_printf("Test Success!\nres = %d\nstring tested: %s\n", res, str);
	else
		ft_printf("Test Fail!\nres = %d\nstring tested: %s\n", res, str);
}

TEST_GROUP(CheckEntries);

TEST_SETUP(CheckEntries)
{
}

TEST_TEARDOWN(CheckEntries)
{
}

TEST(CheckEntries, zero)
{
	TEST_ASSERT_EQUAL(0, ft_test_check_entry("0"));
}

TEST(CheckEntries, A)
{
	TEST_ASSERT_EQUAL(1, ft_test_check_entry("A"));
}

TEST(CheckEntries, space)
{
	TEST_ASSERT_EQUAL(1, ft_test_check_entry(" "));
}

TEST(CheckEntries, large_space)
{
	TEST_ASSERT_EQUAL(1, ft_test_check_entry("       "));
}

TEST(CheckEntries, positive_number)
{
	TEST_ASSERT_EQUAL(0, ft_test_check_entry("12345678"));
}

TEST(CheckEntries, negative_number)
{
	TEST_ASSERT_EQUAL(0, ft_test_check_entry("-12345678"));
}

TEST(CheckEntries, letters_numbers)
{
	TEST_ASSERT_EQUAL(1, ft_test_check_entry("abc12345678"));
}
