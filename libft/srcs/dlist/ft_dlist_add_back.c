/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlist_add_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:12:03 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/10 17:12:09 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlist_add_back(t_dlist **dlist, void *data)
{
	t_dlist	*res;

	if (!dlist)
		return ;
	if (*dlist && (*dlist)->next)
	{
		ft_dlist_add_back(&(*dlist)->next, data);
		return ;
	}
	res = ft_dlist_create(data);
	if (!res)
		return ;
	if (!(*dlist))
		*dlist = res;
	else
	{
		(*dlist)->next = res;
		res->prev = *dlist;
	}
}
