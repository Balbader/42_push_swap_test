/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlist_find.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-lez <ple-lez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 18:05:21 by ple-lez           #+#    #+#             */
/*   Updated: 2022/11/19 18:08:54 by ple-lez          ###   ########.fr       */
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
