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

#include "test.h"

// #if defined test_check_entry
// 	int	main(void)
// 	{
// 		ft_printf("RUNNING TEST ----> ft_test_check_entry.c")
// 		ft_test_check_entry("0");
// 		ft_printf("\n");
// 		ft_test_check_entry("A");
// 		ft_printf("\n");
// 		ft_test_check_entry(" ");
// 		ft_printf("\n");
// 		ft_test_check_entry("        ");
// 		ft_printf("\n");
// 		ft_test_check_entry("12345678");
// 		ft_printf("\n");
// 		ft_test_check_entry("-12345678");
// 		ft_printf("\n");
// 		ft_test_check_entry("abc12345678");
// 		ft_printf("\n");
// 		ft_printf("main.c executed!");
// 		return (0);
// 	}
// #endif

void	ft_test_check_entry(char *str)
{
	int	res;

	res = ft_check_entry(str);
	if (res == 0)
		ft_printf("Test Success!\nres = %d\nstring tested: %s\n", res, str);
	else
		ft_printf("Test Fail!\nres = %d\nstring tested: %s\n", res, str);
}
