/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlist_clear.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-lez <ple-lez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 15:00:35 by ple-lez           #+#    #+#             */
/*   Updated: 2022/11/19 17:30:02 by ple-lez          ###   ########.fr       */
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
