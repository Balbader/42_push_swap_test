/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_convert_entry.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 223/01/21 10:38:01 by baalbade          #+#    #+#             */
/*   Updated: 223/01/21 10:38:03 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unity.h"
#include "unity_fixture.h"
#include "push_swap.h"

static int	ft_test_convert_entry(char *str)
{
	int	res_atoi;
	int	res_ft;
	
	res_ft = ft_convert_entry(str);
	res_atoi = atoi(str);
	return (res_ft == res_atoi);
}

TEST_GROUP(convertEntries);

TEST_SETUP(convertEntries)
{
}

TEST_TEARDOWN(convertEntries)
{
}

TEST(convertEntries, zero)
{
	TEST_ASSERT(ft_test_convert_entry("0"));
}

TEST(convertEntries, positiveOneStr)
{
	TEST_ASSERT(ft_test_convert_entry("1"));
}

TEST(convertEntries, negativeOneStr)
{
	TEST_ASSERT(ft_test_convert_entry("-1"));
}

TEST(convertEntries, twoDigitStr)
{
	TEST_ASSERT(ft_test_convert_entry("10"));
}

TEST(convertEntries, threeDigitStr)
{
	TEST_ASSERT(ft_test_convert_entry("874"));
}

TEST(convertEntries, intMax)
{
	TEST_ASSERT(ft_test_convert_entry("2147483648"));
}

TEST(convertEntries, intMin)
{
	TEST_ASSERT(ft_test_convert_entry("-2147483647"));
}

TEST(convertEntries, letters)
{
	TEST_ASSERT(ft_test_convert_entry("abcd"));
}

TEST(convertEntries, lettersNumbers)
{
	TEST_ASSERT(ft_test_convert_entry("abcd1234"));
}

TEST(convertEntries, negativeLettersNumbers)
{
	TEST_ASSERT(ft_test_convert_entry("-abcd1234"));
}

TEST(convertEntries, spaceLettersNumbers)
{
	TEST_ASSERT(ft_test_convert_entry(" abcd1234"));
}

TEST(convertEntries, plusMinusLettersNumbers)
{
	TEST_ASSERT(ft_test_convert_entry("+-abcd1234"));
}

TEST(convertEntries, minusPlusLettersNumbers)
{
	TEST_ASSERT(ft_test_convert_entry("+-abcd1234"));
}

TEST(convertEntries, numbersLetters)
{
	TEST_ASSERT(ft_test_convert_entry("1234abcd"));
}

TEST(convertEntries, negativeNumbersLetters)
{
	TEST_ASSERT(ft_test_convert_entry("-1234abcd"));
}

TEST(convertEntries, spaceNumbersLetters)
{
	TEST_ASSERT(ft_test_convert_entry(" 1234abcd"));
}

TEST(convertEntries, plusMinusNumbersLetters)
{
	TEST_ASSERT(ft_test_convert_entry("+-1234abcd"));
}

TEST(convertEntries, minusPlusNumbersLetters)
{
	TEST_ASSERT(ft_test_convert_entry("-+1234abcd"));
}

TEST(convertEntries, spacePlusMinusNumbersLetters)
{
	TEST_ASSERT(ft_test_convert_entry(" +-1234abcd"));
}

TEST(convertEntries, spaceMinusPlusNumbersLetters)
{
	TEST_ASSERT(ft_test_convert_entry(" -+1234abcd"));
}

TEST(convertEntries, emptyStr)
{
	TEST_ASSERT(ft_test_convert_entry(""));
}

TEST(convertEntries, plus)
{
	TEST_ASSERT(ft_test_convert_entry("+"));
}

TEST(convertEntries, minus)
{
	TEST_ASSERT(ft_test_convert_entry("-"));
}

