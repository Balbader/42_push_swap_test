/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlist_rotate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:16:18 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/10 17:16:21 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlist_rotate(t_dlist **dlist)
{
	t_dlist	*first;

	if (!dlist || !(*dlist))
		return ;
	first = ft_dlist_pop(dlist);
	ft_dlist_add_back(dlist, first->data);
	free(first);
}
