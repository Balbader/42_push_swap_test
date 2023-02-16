/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlist_clear.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:12:31 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/10 17:12:34 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlist_clear(t_dlist *dlist, void (*f)(void *))
{
	if (!dlist)
		return ;
	ft_dlist_clear(dlist->next, f);
	if (f && dlist->data)
		f(dlist->data);
	free(dlist);
}
