/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_tests_runner.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:53:21 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/20 14:53:24 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unity_fixture.h"

TEST_GROUP_RUNNER(checkEntries)
{
	RUN_TEST_CASE(checkEntries, zero);
	RUN_TEST_CASE(checkEntries, A);
	RUN_TEST_CASE(checkEntries, space);
	RUN_TEST_CASE(checkEntries, largeSpace);
	RUN_TEST_CASE(checkEntries, positiveNumber);
	RUN_TEST_CASE(checkEntries, negativeNumber);
	RUN_TEST_CASE(checkEntries, lettersNumbers);
}

TEST_GROUP_RUNNER(convertEntries)
{
	RUN_TEST_CASE(convertEntries, zero);
	RUN_TEST_CASE(convertEntries, positiveOneStr);
	RUN_TEST_CASE(convertEntries, negativeOneStr);
	RUN_TEST_CASE(convertEntries, twoDigitStr);
	RUN_TEST_CASE(convertEntries, twoDigitStr);
	RUN_TEST_CASE(convertEntries, threeDigitStr);
	RUN_TEST_CASE(convertEntries, intMax);
	RUN_TEST_CASE(convertEntries, intMin);
	RUN_TEST_CASE(convertEntries, letters);
	RUN_TEST_CASE(convertEntries, lettersNumbers);
	RUN_TEST_CASE(convertEntries, negativeLettersNumbers);
	RUN_TEST_CASE(convertEntries, spaceLettersNumbers);
	RUN_TEST_CASE(convertEntries, plusMinusLettersNumbers);
	RUN_TEST_CASE(convertEntries, minusPlusLettersNumbers);
	RUN_TEST_CASE(convertEntries, numbersLetters);
	RUN_TEST_CASE(convertEntries, negativeNumbersLetters);
	RUN_TEST_CASE(convertEntries, spaceNumbersLetters);
	RUN_TEST_CASE(convertEntries, plusMinusNumbersLetters);
	RUN_TEST_CASE(convertEntries, minusPlusNumbersLetters);
	RUN_TEST_CASE(convertEntries, spacePlusMinusNumbersLetters);
	RUN_TEST_CASE(convertEntries, spaceMinusPlusNumbersLetters);
	RUN_TEST_CASE(convertEntries, emptyStr);
	RUN_TEST_CASE(convertEntries, plus);
	RUN_TEST_CASE(convertEntries, minus);
}

TEST_GROUP_RUNNER(storeEntries)
{
	RUN_TEST_CASE(storeEntries, zero);
	RUN_TEST_CASE(storeEntries, minusZero);
	RUN_TEST_CASE(storeEntries, one);
	RUN_TEST_CASE(storeEntries, ten);
	RUN_TEST_CASE(storeEntries, minusTen);
	RUN_TEST_CASE(storeEntries, threeDigitNumber);
	RUN_TEST_CASE(storeEntries, negativeThreeDigitNumber);
	RUN_TEST_CASE(storeEntries, intMax);
	RUN_TEST_CASE(storeEntries, intMin);
}
