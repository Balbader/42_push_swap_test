/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_arr_3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 13:15:00 by baalbade          #+#    #+#             */
/*   Updated: 2023/02/02 13:15:03 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_init_arr_3(t_list *stack, int *arr)
{
	int	i;

	i = 0;
	while (stack)
	{
		arr[i] = stack->data;
		stack = stack->next;
		++i;
	}
	return (arr);
}
