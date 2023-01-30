/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_before_last_node.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 17:16:34 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/30 17:16:36 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_get_before_last_node(t_list *stack)
{
	t_list	*before_last_node;

	if (!stack)
		return (NULL);
	before_last_node = stack;
	while (before_last_node->next && before_last_node->next->next != NULL)
		before_last_node = before_last_node->next;
	return (before_last_node);
}
