/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_biggest_node_pos.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 09:25:22 by baalbade          #+#    #+#             */
/*   Updated: 2023/02/02 09:25:33 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_biggest_node_pos(t_list *stack)
{
	int		data;
	int		pos;

	data = stack->data;
	pos = stack->index;
	while (stack)
	{
		if (stack->data > data)
		{
			data = stack->data;
			pos = stack->index;
		}
		stack = stack->next;
	}
	return (pos);
}
