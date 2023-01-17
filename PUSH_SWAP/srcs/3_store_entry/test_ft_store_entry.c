/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_store_entry.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 08:31:14 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/17 08:31:20 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_dlist *ft_store_entry(int data);

void	test_ft_store_entry(int data)
{
	t_dlist	*test;

	test = ft_store_entry(data);
	if (data == test->data)
	{
		printf("Test Success!\n");
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

int	main(void)
{
	test_ft_store_entry(0);
	test_ft_store_entry(-0);
	test_ft_store_entry(1);
	test_ft_store_entry(-0);
	test_ft_store_entry(10);
	test_ft_store_entry(-10);
	test_ft_store_entry(123);
	test_ft_store_entry(-123);
	test_ft_store_entry(INT_MIN);
	test_ft_store_entry(INT_MAX);
	return (0);
}
