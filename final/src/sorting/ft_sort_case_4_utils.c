/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_case_4_utils.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:52:02 by baalbade          #+#    #+#             */
/*   Updated: 2023/02/13 11:52:04 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_smallest_nodes_4(t_list **stack_a,
						t_list **stack_b, int smallest_node_index)
{
	if (smallest_node_index == 1)
	{
		ft_pb(stack_a, stack_b);
	}
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
		ft_pb(stack_a, stack_b);
	}
}

void	ft_finish_sorting_4(t_list **stack_a, t_list **stack_b)
{
	ft_pa(stack_a, stack_b);
	*stack_a = ft_re_init_index(*stack_a);
	ft_ra(stack_a);
	*stack_a = ft_re_init_index(*stack_a);

	ft_print_stack(stack_a, "stack_a");
	printf("\n");
}
