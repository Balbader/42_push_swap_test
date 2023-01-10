/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlist_foreach.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:14:52 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/10 17:14:54 by baalbade         ###   ########.fr       */
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
