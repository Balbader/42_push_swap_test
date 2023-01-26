/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlist_swap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:16:39 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/10 17:16:41 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlist_swap(t_dlist **dlist)
{
	t_dlist	*first;
	t_dlist	*second;

	if (!dlist)
		return ;
	if (!*dlist || !(*dlist)->next)
		return ;
	first = ft_dlist_pop(dlist);
	second = ft_dlist_pop(dlist);
	ft_dlist_add_front(dlist, first->data);
	free(first);
	ft_dlist_add_front(dlist, second->data);
	free(second);
}
