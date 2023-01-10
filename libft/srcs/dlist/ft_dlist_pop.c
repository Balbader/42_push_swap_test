/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlist_pop.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:15:39 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/10 17:15:41 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dlist	*ft_dlist_pop(t_dlist **dlist)
{
	t_dlist	*res;

	if (!dlist || !(*dlist))
		return (NULL);
	res = *dlist;
	*dlist = (*dlist)->next;
	if (*dlist)
		(*dlist)->prev = NULL;
	res->next = NULL;
	return (res);
}
