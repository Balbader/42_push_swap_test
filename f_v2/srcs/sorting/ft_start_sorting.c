/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_start_sorting.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 12:35:18 by baalbade          #+#    #+#             */
/*   Updated: 2023/02/17 12:35:19 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_start_sorting(t_list **stack_a,
					  t_list **stack_b, int stack_size)
{
	int		smallest_node_index;
	int		i;

	i = stack_size;
	while (i > 3)
	{
		smallest_node_index = ft_find_smallest_node_pos(*stack_a);
		if (i == 5)
		{
			ft_push_smallest_node_5(stack_a, stack_b, smallest_node_index);
			*stack_a = ft_re_init_index(*stack_a);
		}
		if (i == 4)
		{
			ft_push_smallest_node_4(stack_a, stack_b, smallest_node_index);
			*stack_a = ft_re_init_index(*stack_a);
		}
		--i;
	}
}
