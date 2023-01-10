/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlist_foreach.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-lez <ple-lez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 14:04:54 by ple-lez           #+#    #+#             */
/*   Updated: 2022/11/19 14:28:47 by ple-lez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlist_foreach(t_dlist *dlist, void (*f)(t_dlist *))
{
	if (!dlist)
		return ;
	f(dlist);
	ft_dlist_foreach(dlist->next, f);
}
