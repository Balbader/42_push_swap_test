/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_look_for_doubles.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:49:50 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/23 16:49:52 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_look_for_doubles(int *data_arr, int data_arr_size)
{
	int	i;
	int	j;

	i = 0;
	while (i < data_arr_size)
	{
		j = i + 1;
		while (j < data_arr_size)
		{
			if (data_arr[i] == data_arr[j])
				return (1);
			++j;
		}
		++i;
	}
	return (0);
}
