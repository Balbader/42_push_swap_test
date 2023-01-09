/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlist_pop_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-lez <ple-lez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 13:38:56 by ple-lez           #+#    #+#             */
/*   Updated: 2022/11/19 14:03:22 by ple-lez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dlist	*ft_dlist_pop_back(t_dlist **dlist)
{
	t_dlist	*res;

	if (!dlist || !(*dlist))
		return (NULL);
	if ((*dlist)->next)
		return (ft_dlist_pop_back(&(*dlist)->next));
	res = *dlist;
	*dlist = (*dlist)->prev;
	if (*dlist)
		(*dlist)->next = NULL;
	res->prev = NULL;
	return (res);
}
