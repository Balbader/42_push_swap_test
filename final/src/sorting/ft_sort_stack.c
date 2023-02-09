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

static int	ft_find_pivot(t_list *stack)
{
	t_list	*temp;
	int		stack_size;
	int		pivot;

	temp = NULL;
	temp = ft_pre_sort_stack(stack);
	temp = ft_re_init_index(temp);
	stack_size = ft_get_stack_size(temp);
	while (temp)
		{
			if (temp->index == stack_size / 2)
				pivot = temp->data;
			temp = temp->next;
		}
	return (pivot);
}

void	ft_sort_stack(t_list *stack_a, t_list *stack_b)
{
	int	pivot;

	pivot = ft_find_pivot(stack_a);
	printf("pivot: %d\n\n", pivot);
	if (stack_a->data > pivot)
		ft_pb(&stack_a, &stack_b);
	else
		ft_ra(&stack_a);
}
