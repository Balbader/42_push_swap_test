/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 13:16:10 by baalbade          #+#    #+#             */
/*   Updated: 2023/02/08 13:16:12 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_split_stack(t_list *stack_a, t_list *stack_b)
{
	t_list	*mid_node;

	if (!stack_a)
		return ;
	mid_node = ft_find_middle_node(stack_a);
	if (stack_a->data > mid_node->data)
		ft_pb(&stack_a, &stack_b);
	else
		ft_ra(&stack_a);
}
