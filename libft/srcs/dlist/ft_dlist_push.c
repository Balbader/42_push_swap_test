/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlist_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:15:51 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/10 17:15:53 by baalbade         ###   ########.fr       */
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
