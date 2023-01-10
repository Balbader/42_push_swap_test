/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlist_rev_rotate.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-lez <ple-lez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 15:03:13 by ple-lez           #+#    #+#             */
/*   Updated: 2022/11/19 15:04:20 by ple-lez          ###   ########.fr       */
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
