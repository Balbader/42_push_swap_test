/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlist_pop.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-lez <ple-lez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 13:27:35 by ple-lez           #+#    #+#             */
/*   Updated: 2022/11/19 13:38:17 by ple-lez          ###   ########.fr       */
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
