/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlist_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-lez <ple-lez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 15:09:39 by ple-lez           #+#    #+#             */
/*   Updated: 2022/11/19 19:07:07 by ple-lez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlist_push(t_dlist **pushed, t_dlist **popped)
{
	t_dlist	*node;

	node = ft_dlist_pop(popped);
	if (!node)
		return ;
	ft_dlist_add_front(pushed, node->data);
	free(node);
}
