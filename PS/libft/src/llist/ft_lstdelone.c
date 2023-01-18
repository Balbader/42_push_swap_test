/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:44:15 by baalbade          #+#    #+#             */
/*   Updated: 2022/12/08 12:29:08 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void(*del)(void *))
{
	t_list	*node_to_clear;

	node_to_clear = (t_list *)malloc(sizeof(t_list));
	if (!node_to_clear)
		return ;
	node_to_clear = lst;
	(*del)(node_to_clear->content);
	free(node_to_clear);
}
