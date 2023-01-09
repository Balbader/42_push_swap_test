/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlist_rotate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-lez <ple-lez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 14:56:01 by ple-lez           #+#    #+#             */
/*   Updated: 2022/11/19 14:58:15 by ple-lez          ###   ########.fr       */
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
