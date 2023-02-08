/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_mid_node.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 11:48:34 by baalbade          #+#    #+#             */
/*   Updated: 2023/02/08 11:48:36 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_list	*ft_node_to_find(t_list *stack)
{
	t_list	*to_find;
	t_list	*current;
	int		stack_size;

	if (!stack)
		return (NULL);
	current = ft_pre_sort_stack(stack);
	stack_size = ft_get_stack_size(stack);
	current = ft_re_init_index(stack);
	while (current)
	{
		if (current->index == stack_size / 2)
			to_find = current;
		current = current->next;
	}
	return (to_find);
}

t_list	*ft_find_middle_node(t_list *stack)
{
	t_list	*middle_node;
	t_list	*to_find;

	if (!stack)
		return (NULL);
	to_find = ft_node_to_find(stack);
	while (stack)
		{
			if (stack->data == to_find->data)
				middle_node = stack;
			stack = stack->next;
		}
	return (middle_node);
}
