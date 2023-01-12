/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_dnode.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 10:20:11 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/12 10:20:13 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_dlist	*ft_find_dnode(t_dlist *dlist, int data)
{
	t_dlist	*to_find;

	if (!dlist)
		return (NULL);
	to_find = dlist;
	while (to_find != NULL)
	{
		if (to_find->data == data)
			return (to_find);
		to_find = to_find->next;
	}
	return (NULL);
}
