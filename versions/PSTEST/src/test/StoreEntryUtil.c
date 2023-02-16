/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StoreEntryUtil.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 11:33:08 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/24 11:33:11 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CuTest.h"

void	Test_StoreEntry_SingleDigit_Zero(CuTest *tc)
{
	int	*arr;
	arr = ft_calloc(10, sizeof(int));
	if (!arr)
		return ;
	int	data = 0;
	int	pos = 0;
	ft_store_entry(data, arr, pos);
	int expected = 0;
	CuAssertIntEquals(tc, expected, arr[0]);
}

CuSuite *StoreEntryUtilGetSuite()
{
	CuSuite *suite = CuSuiteNew();

	SUITE_ADD_TEST(suite, Test_StoreEntry_SingleDigit_Zero);
	return (suite);
}
