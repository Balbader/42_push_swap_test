/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_is_sorted.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 07:33:34 by baalbade          #+#    #+#             */
/*   Updated: 2023/02/02 07:33:41 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_stack_is_sorted(t_list *stack)
{
	int	data;

	data = stack->data;
	while (stack)
	{
		if (data >= stack->data)
			return (0);
		data = stack->data;
		stack = stack->next;
	}
	return (1);
}
