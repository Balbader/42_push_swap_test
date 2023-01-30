/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_last_node.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 17:16:18 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/30 17:16:20 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_get_last_node(t_list *stack)
{
	t_list	*last_node;

	if (!stack)
		return (NULL);
	last_node = stack;
	while (last_node->next != NULL)
		last_node = last_node->next;
	return (last_node);
}
