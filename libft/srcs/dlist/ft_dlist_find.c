/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlist_find.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:14:41 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/10 17:14:43 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dlist	*ft_dlist_find(t_dlist *dlist, void *data, int (*f)(void *, void *))
{
	if (!dlist)
		return (NULL);
	if (dlist->data)
	{
		if (f(dlist->data, data) == 0)
			return (dlist);
	}
	return (ft_dlist_find(dlist->next, data, f));
}
