/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_biggest_node.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 18:00:22 by baalbade          #+#    #+#             */
/*   Updated: 2023/02/02 18:00:24 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_is_biggest_node(t_list **stack)
{
	int		data;

	data = (*stack)->data;
	while (*stack)
	{
		if ((*stack)->data > data)
			data = (*stack)->data;
		(*stack) = (*stack)->next;
	}
	return (*stack);
}
