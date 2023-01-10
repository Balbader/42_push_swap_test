/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlist_add_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-lez <ple-lez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 10:40:08 by ple-lez           #+#    #+#             */
/*   Updated: 2022/11/19 13:59:51 by ple-lez          ###   ########.fr       */
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
