/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_smallest_node_pos.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 08:39:25 by baalbade          #+#    #+#             */
/*   Updated: 2023/02/02 08:39:27 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_smallest_node_pos(t_list *stack)
{
	int		data;
	int		index;

	data = stack->data;
	while (stack)
	{
		if (stack->data < data)
		{
			data = stack->data;
			index = stack->index;
		}
		stack = stack->next;
	}
	return (index);
}
