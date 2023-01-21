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

void	ft_test_check_entry(char *str)
{
	int	res;

	res = ft_check_entry(str);
	if (res == 0)
		ft_printf("Test Success!\nres = %d\nstring tested: %s\n", res, str);
	else
		ft_printf("Test Fail!\nres = %d\nstring tested: %s\n", res, str);
}
