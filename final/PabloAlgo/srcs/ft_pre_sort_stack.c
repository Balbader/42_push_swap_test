/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pre_sort_stack.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 15:21:12 by baalbade          #+#    #+#             */
/*   Updated: 2023/02/06 15:21:20 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"

// static t_list	*ft_get_last_node(t_list *stack)
// {
// 	while (stack && stack->next != NULL)
// 		stack = stack->next;
// 	return (stack);
// }

static void	ft_swap_nodes(t_list *a, t_list *b)
{
	t_list	*tmp;

	tmp = (t_list *)malloc(sizeof(t_list));
	if (!tmp)
		return ;
	tmp->data = a->data;
	tmp->index = a->index;
	a->data = b->data;
	a->index = b->index;
	b->data = tmp->data;
	b->index = tmp->index;
}

// define partition: wich will produce the pivot index
// and moves the items lower than pivot before the pivot
// and moves the items greater than pivot after the pivot
static t_list	*ft_partition(t_list *head, t_list *tail)
{
	t_list	*pivot;
	t_list	*first_node;

	pivot = head;
	first_node = head;
	while (first_node && first_node != tail)
	{
		if (first_node->data < tail->data)
		{
			pivot = head;
			ft_swap_nodes(head, first_node);
			head = head->next;
		}
		first_node = first_node->next;
	}
	ft_swap_nodes(head, tail);
	return (pivot);
}

// qsort:
// 1. calls partition and get pivot from it
// 2. then recalls itself recursively in order to sort the stack
static void	ft_qsort_stack(t_list *head, t_list *tail)
{
	t_list	*pivot;

	if (head == tail)
		return ;
	pivot = ft_partition(head, tail);
	if (pivot != NULL && pivot->next != NULL)
		ft_qsort_stack(pivot->next, tail);
	if (pivot != NULL && head != NULL)
		ft_qsort_stack(head, pivot);
}

t_list	*ft_pre_sort_stack(t_list *rand_stack)
{
	t_list	*head;
	t_list	*tail;

	if (!rand_stack)
		return (NULL);
	head = rand_stack;
	tail = ft_get_last_node(rand_stack);
	ft_qsort_stack(head, tail);
	return (rand_stack);
}
