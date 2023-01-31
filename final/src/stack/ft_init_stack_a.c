/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_stack_a.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 09:51:40 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/24 09:51:42 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_list	*ft_create_node(int data, int index)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->data = data;
	new_node->index = index;
	new_node->next = NULL;
	return (new_node);
}

static t_list	*ft_create_list(t_list *stack_a, int ac, int *entries)
{
	t_list	*head;
	int		i;
	int		j;

	i = 1;
	j = 0;
	stack_a = ft_create_node(entries[j], i);
	head = stack_a;
	while (i < ac)
	{
		++i;
		++j;
		stack_a->next = ft_create_node(entries[j], i);
		stack_a = stack_a->next;
	}
	return (head);
}

t_list	*ft_init_stack_a(t_list *stack_a, int *entries, int ac)
{
	stack_a = ft_create_list(stack_a, ac, entries);
	return (stack_a);
}
