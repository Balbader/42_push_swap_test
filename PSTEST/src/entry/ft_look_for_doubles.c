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
	int	temp[data_arr_size];
	int	i;
	int	j;

	j = 0;
	i = 0;
	temp[j] = data_arr[i];
	while (data_arr[i])
	{
		while (temp[j])
		{
			if (data_arr[i] == temp[j])
				return (1);
			temp[++j] = data_arr[++i];
		}
		++i;
	}
	return (0);
}
