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

#include "sort.h"

static int	ft_get_stack_size(t_list *stack)
{
	int	count;

	count = 0;
	while (stack)
	{
		++count;
		stack = stack->next;
	}
	return (count);
}

int	*ft_init_arr_3(t_list *stack)
{
	int	*arr;
	int	stack_size;
	int	i;

	stack_size = ft_get_stack_size(stack);
	arr = (int *)malloc(sizeof(int) * (stack_size));
	if (!arr)
		return (0);
	i = 0;
	while (stack)
	{
		arr[i] = stack->data;
		stack = stack->next;
		++i;
	}
	return (arr);
}
