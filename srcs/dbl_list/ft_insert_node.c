/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insert_node.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 09:43:19 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/12 09:43:21 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_insert_node(t_dlist *dlist, int data, t_dlist *to_find)
{
	t_dlist	*node_to_insert;

	if (!dlist)
		return ;
	while (dlist->data != to_find->data)
		dlist = dlist->next;
	node_to_insert = ft_create_node(data);
	node_to_insert->next = dlist->next;
	dlist->next = node_to_insert;
	node_to_insert->prev = dlist;
	if (node_to_insert->next != NULL)
		node_to_insert->next->prev = node_to_insert;
}
