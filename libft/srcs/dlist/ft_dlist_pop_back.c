/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlist_pop_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:15:26 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/10 17:15:29 by baalbade         ###   ########.fr       */
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
