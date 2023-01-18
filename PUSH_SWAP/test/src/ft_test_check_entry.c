/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_check_entry.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:32:54 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/18 12:32:57 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test.h"

void	ft_test_check_entry(char *str)
{
	int	res_ft_check_entry;

	res_ft_check_entry = ft_check_entry(str);
	if (res_ft_check_entry == 0)
		printf("res = %d\n%s: Test Success!\n", res_ft_check_entry, str);
	else
		printf("res = %d\n%s: Test Fail!\n", res_ft_check_entry, str);
}

int	main(void)
{
	ft_test_check_entry("0");
	ft_test_check_entry("A");
	ft_test_check_entry(" ");
	ft_test_check_entry("        ");
	ft_test_check_entry("12345678");
	ft_test_check_entry("-12345678");
	ft_test_check_entry("abc12345678");
	return (0);
}