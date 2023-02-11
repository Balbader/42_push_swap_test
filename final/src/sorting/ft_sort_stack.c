/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 09:28:10 by baalbade          #+#    #+#             */
/*   Updated: 2023/02/08 09:28:12 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_list	*ft_copy_stack(t_list *stack)
{
	t_list	*copy;
	t_list	*head;

	copy = ft_create_node(stack->data, stack->index);
	head = copy;
	stack = stack->next;
	while (stack)
	{
		copy->next = ft_create_node(stack->data, stack->index);
		copy = copy->next;
		stack = stack->next;
	}
	head = ft_pre_sort_stack(head);
	head = ft_re_init_index(head);
	return (head);
}

static int	ft_find_pivot(t_list *stack)
{
	t_list	*temp;
	int		stack_size;
	int		pivot;

	temp = ft_copy_stack(stack);
	stack_size = ft_get_stack_size(temp);
	while (temp)
	{
		if (temp->index == (stack_size / 2))
			pivot = temp->data;
		temp = temp->next;
	}
	return (pivot);
}

void	ft_sort_stack(t_list **stack_a, t_list **stack_b)
{
	int		pivot;
	int		stack_size;
	int		i;

	stack_size = ft_get_stack_size(*stack_a);
	pivot = ft_find_pivot(*stack_a);
	i = 0;
	while (i < stack_size)
	{
		if ((*stack_a)->data > pivot)
		{
			ft_pb(stack_a, stack_b);
		}
		else
		{
			ft_ra(stack_a);
		}
		++i;
	}
}
