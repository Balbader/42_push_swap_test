/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_store_entry.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 13:16:36 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/21 13:16:38 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unity.h"
#include "unity_fixture.h"
#include "push_swap.h"


static void	ft_test_store_entry(int data)
{
	t_dblist	*test;

	test = ft_store_entry(data);
	return (data == test->data);
}

TEST_GROUP(storeEntries);

TEST_SETUP(storeEntries)
{
}

TEST_TEARDOWN(storeEntries)
{
}

TEST(storeEntries, zero)
{
	TEST_ASSERT(ft_test_store_entry(0));
}

TEST(storeEntries, minusZero)
{
	TEST_ASSERT(ft_test_store_entry(-0));
}

TEST(storeEntries, one)
{
	TEST_ASSERT(ft_test_store_entry(1));
}

TEST(storeEntries, ten)
{
	TEST_ASSERT(ft_test_store_entry(10));
}

TEST(storeEntries, minusTen)
{
	TEST_ASSERT(ft_test_store_entry(-10));
}

TEST(storeEntries, threeDigitNumber)
{
	TEST_ASSERT(ft_test_store_entry(123));
}

TEST(storeEntries, negativeThreeDigitNumber)
{
	TEST_ASSERT(ft_test_store_entry(-123));
}

TEST(storeEntries, intMin)
{
	TEST_ASSERT(ft_test_store_entry(-2147483647));
}

TEST(storeEntries, intMax)
{
	TEST_ASSERT(ft_test_store_entry(2147483648));
}
