/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlist_swap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-lez <ple-lez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 14:51:52 by ple-lez           #+#    #+#             */
/*   Updated: 2022/11/19 15:02:01 by ple-lez          ###   ########.fr       */
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
