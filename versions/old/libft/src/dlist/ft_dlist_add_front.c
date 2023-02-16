/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlist_add_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:12:18 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/10 17:12:20 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlist_add_front(t_dlist **dlist, void *data)
{
	t_dlist	*res;

	if (!dlist)
		return ;
	res = ft_dlist_create(data);
	if (!res)
		return ;
	res->next = *dlist;
	if (*dlist)
		(*dlist)->prev = res;
	*dlist = res;
}
