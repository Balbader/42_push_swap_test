/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlist_rev_rotate.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:16:04 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/10 17:16:06 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlist_rev_rotate(t_dlist **dlist)
{
	t_dlist	*last;

	if (!dlist || !*dlist)
		return ;
	last = ft_dlist_pop_back(dlist);
	ft_dlist_add_front(dlist, last->data);
	free(last);
}
