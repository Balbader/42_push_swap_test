/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_node.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 10:52:10 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/12 10:52:13 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_dblist	*ft_find_node(t_dblist *list, int data)
{
	t_dblist	*to_find;

	if (!list)
		return (NULL);
	to_find = list;
	while (to_find != NULL)
	{
		if (to_find->data == data)
			return (to_find);
		to_find = to_find->next;
	}
	return (NULL);
}
