/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_store_entry.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:33:50 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/18 12:33:52 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ft_test_store_entry(int data)
{
	t_dblist	*test;

	test = ft_store_entry(data);
	if (data == test->data)
	{
		ft_printf("Test Success!\n");
		printf("data: %d\n", data);
		printf("test->data: %d\n", test->data);
	}
	else
	{
		printf("Test Fail!\n");
		printf("data: %d\n", data);
		printf("test->data: %d\n", test->data);
	}
}

// int	main(void)
// {
// 	ft_test_store_entry(0);
// 	ft_test_store_entry(-0);
// 	ft_test_store_entry(1);
// 	ft_test_store_entry(-0);
// 	ft_test_store_entry(10);
// 	ft_test_store_entry(-10);
// 	ft_test_store_entry(123);
// 	ft_test_store_entry(-123);
// 	ft_test_store_entry(INT_MIN);
// 	ft_test_store_entry(INT_MAX);
// 	return (0);
// }
