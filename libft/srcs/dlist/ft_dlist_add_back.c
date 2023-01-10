/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlist_add_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-lez <ple-lez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 11:01:04 by ple-lez           #+#    #+#             */
/*   Updated: 2022/11/19 13:26:49 by ple-lez          ###   ########.fr       */
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
