/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_case_5.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:09:30 by baalbade          #+#    #+#             */
/*   Updated: 2023/02/01 16:09:32 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_find_case_5(int *entries, int entries_size,
							t_list *stack_a, t_list *stack_b)
{
}

t_list	*ft_sort_case_5(int entries[5], t_list *stack_a, t_list *stack_b)
{
	t_list	*before;

	(void)stack_b;
	(void)entries;
	before = stack_a;
	printf("Before Sorting:\n");
	while (before != NULL)
	{
		printf("stack_a[%d]: %d\n", before->index, before->data);
		before = before->next;
	}
	printf("\n");
	return (stack_a);
}
