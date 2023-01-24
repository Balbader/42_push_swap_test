/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_node.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 11:21:01 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/12 11:21:03 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_dblist	*ft_create_node(int data)
{
	t_dblist	*new_node;

	new_node = (t_dblist *)malloc(sizeof(t_dblist));
	if (!new_node)
		return (NULL);
	new_node->data = data;
	new_node->prev = NULL;
	new_node->next = NULL;
	return (new_node);
}
