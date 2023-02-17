/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_look_for_doubles.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 09:36:22 by baalbade          #+#    #+#             */
/*   Updated: 2023/02/17 09:36:23 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_look_for_doubles(int *arr, int arr_size)
{
	int	i;
	int	j;

	i = 0;
	while (i < arr_size)
	{
		j = i + 1;
		while (j < arr_size)
		{
			if (arr[i] == arr[j])
			{
				ft_putstr_fd("Error\n", 2);
				exit(1);
			}
			++j;
		}
		++i;
	}
}
