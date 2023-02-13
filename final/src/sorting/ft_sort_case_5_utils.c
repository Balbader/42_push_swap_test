/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_case_5_utils.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 18:11:44 by baalbade          #+#    #+#             */
/*   Updated: 2023/02/02 18:11:47 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_big_nodes_5(t_list **stack_a,
						t_list **stack_b, int big_node_index)
{
	if (big_node_index == 1)
		ft_pb(stack_a, stack_b);
	if (big_node_index == 2)
	{
		ft_ra(stack_a);
		ft_pb(stack_a, stack_b);
	}
	if (big_node_index == 3)
	{
		ft_ra(stack_a);
		ft_ra(stack_a);
		ft_pb(stack_a, stack_b);
	}
	if (big_node_index == 4)
	{
		ft_rra(stack_a);
		ft_rra(stack_a);
		ft_pb(stack_a, stack_b);
	}
	if (big_node_index == 5)
	{
		ft_rra(stack_a);
		ft_pb(stack_a, stack_b);
	}
}

void	ft_push_big_nodes_4(t_list **stack_a,
						t_list **stack_b, int big_node_index)
{
	if (big_node_index == 1)
		ft_pb(stack_a, stack_b);
	if (big_node_index == 2)
	{
		ft_ra(stack_a);
		ft_pb(stack_a, stack_b);
	}
	if (big_node_index == 3)
	{
		ft_ra(stack_a);
		ft_ra(stack_a);
		ft_pb(stack_a, stack_b);
	}
	if (big_node_index == 4)
	{
		ft_rra(stack_a);
		ft_pb(stack_a, stack_b);
	}
}

void	ft_start_sorting(t_list **stack_a,
					t_list **stack_b, int stack_size)
{
	int		big_node_index;

	while (stack_size > 3)
	{
		big_node_index = ft_find_biggest_node_pos(*stack_a);
		if (stack_size == 5)
			ft_push_big_nodes_5(stack_a, stack_b, big_node_index);
		else
			ft_push_big_nodes_4(stack_a, stack_b, big_node_index);
		*stack_a = ft_re_init_index(*stack_a);
		--stack_size;
	}
}

void	ft_finish_sorting(t_list **stack_a, t_list **stack_b)
{
	ft_pa(stack_a, stack_b);
	*stack_a = ft_re_init_index(*stack_a);
	ft_ra(stack_a);
	*stack_a = ft_re_init_index(*stack_a);
	ft_pa(stack_a, stack_b);
	*stack_a = ft_re_init_index(*stack_a);
	ft_ra(stack_a);
	*stack_a = ft_re_init_index(*stack_a);
}
