/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlist_return_last_node.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 08:37:07 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/13 08:37:12 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dlist	*ft_retrun_last_node(t_dlist *list)
{
	t_dlist	*last_node;

	if (!list)
		return (NULL);
	last_node = list;
	while (last_node->next != NULL)
	{
		last_node = last_node->next;
		if (last_node->next == NULL)
			return (last_node);
	}
	return (NULL);
}
