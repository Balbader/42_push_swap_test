/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_smallest_node_5.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 12:38:56 by baalbade          #+#    #+#             */
/*   Updated: 2023/02/17 12:38:57 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_smallest_node_5(t_list **stack_a,
						t_list **stack_b, int smallest_node_index)
{
	if (smallest_node_index == 1)
		ft_pb(stack_a, stack_b);
	if (smallest_node_index == 2)
	{
		ft_ra(stack_a);
		ft_pb(stack_a, stack_b);
	}
	if (smallest_node_index == 3)
	{
		ft_ra(stack_a);
		ft_ra(stack_a);
		ft_pb(stack_a, stack_b);
	}
	if (smallest_node_index == 4)
	{
		ft_rra(stack_a);
		ft_rra(stack_a);
		ft_pb(stack_a, stack_b);
	}
	if (smallest_node_index == 5)
	{
		ft_rra(stack_a);
		ft_pb(stack_a, stack_b);
	}
}

