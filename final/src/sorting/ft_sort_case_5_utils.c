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

void	ft_push_smallest_nodes_5(t_list **stack_a,
						t_list **stack_b, int smallest_node_index)
{
	if (smallest_node_index == 1)
	{
		ft_pb(stack_a, stack_b);
		printf("\n");
	}
	if (smallest_node_index == 2)
	{
		ft_ra(stack_a);
		ft_pb(stack_a, stack_b);
		printf("\n");
	}
	if (smallest_node_index == 3)
	{
		ft_ra(stack_a);
		ft_ra(stack_a);
		ft_pb(stack_a, stack_b);
		printf("\n");
	}
	if (smallest_node_index == 4)
	{
		ft_rra(stack_a);
		ft_rra(stack_a);
		ft_pb(stack_a, stack_b);
		printf("\n");
	}
	if (smallest_node_index == 5)
	{
		ft_rra(stack_a);
		ft_pb(stack_a, stack_b);
		printf("\n");
	}
}

void	ft_start_sorting(t_list **stack_a,
					  t_list **stack_b, int stack_size)
{
	int		smallest_node_index;
	int		i;

	// smallest_node_index = 1;
	i = stack_size;
	while (i > 3)
	{
		smallest_node_index = ft_find_smallest_node_pos(*stack_a);
		printf("smallest_node_index: %d\n", smallest_node_index);
		ft_print_stack(stack_a, "st_a");
		printf("\n");
		if (i == 5)
		{
			ft_push_smallest_nodes_5(stack_a, stack_b, smallest_node_index);
			*stack_a = ft_re_init_index(*stack_a);
		}
		if (i == 4)
		{
			ft_push_smallest_nodes_4(stack_a, stack_b, smallest_node_index);
			*stack_a = ft_re_init_index(*stack_a);
		}
		--i;
	}
}

void	ft_finish_sorting_5(t_list **stack_a, t_list **stack_b)
{
	ft_print_stack(stack_a, "stack_a");
	printf("\n");
	ft_pa(stack_a, stack_b);
	*stack_a = ft_re_init_index(*stack_a);
	ft_print_stack(stack_a, "stack_a");
	printf("\n");
	ft_pa(stack_a, stack_b);
	*stack_a = ft_re_init_index(*stack_a);

	ft_print_stack(stack_a, "stack_a");
	printf("\n");
}
