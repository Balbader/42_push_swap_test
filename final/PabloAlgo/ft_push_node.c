/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_node.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 17:30:09 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/30 17:30:12 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"

void	ft_push_node(t_list *dest, t_list *node)
{
	t_list	*temp;

	if (!node)
		return ;
	temp = node->next;
	node->next = dest;
	dest = node;
	node = temp;
}
