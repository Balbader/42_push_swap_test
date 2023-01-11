/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_errors.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:08:08 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/10 18:08:11 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_check_duplicates(int *arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		if (arr[i] == arr[i + 1])
		{
			ft_printf("Error\n");
			return ;
		}
		++i;
	}
}

void	ft_check_errors(int *arr)
{
	int	i;

	if (!arr)
	{
		ft_printf("Error\n");
		return ;
	}
	ft_check_duplicates(arr);
	i = 0;
	while (arr[i])
	{
		if (!(arr[i] >= INT_MIN && arr[i] <= INT_MAX))
			ft_printf("Error\n");
		++i;
	}
}
