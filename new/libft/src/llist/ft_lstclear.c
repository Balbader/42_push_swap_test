/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 08:57:14 by baalbade          #+#    #+#             */
/*   Updated: 2022/12/08 15:40:27 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node_to_clear;

	node_to_clear = *lst;
	while (node_to_clear->next != NULL)
	{
		(*del)(node_to_clear->content);
		node_to_clear = node_to_clear->next;
	}
	free(node_to_clear);
}
