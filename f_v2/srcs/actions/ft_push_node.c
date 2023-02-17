/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_node.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 08:34:31 by baalbade          #+#    #+#             */
/*   Updated: 2023/02/17 08:34:33 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_node(t_list **src, t_list **dest)
{
	t_list	*tmp;

	if (!*src)
		return ;
	if (*dest == NULL)
	{
		*dest = (t_list *)malloc(sizeof(t_list));
		if (!dest)
			return ;
		(*dest)->data = (*src)->data;
		(*dest)->index = (*src)->index;
		(*dest)->next = NULL;
		(*src) = (*src)->next;
	}
	else
	{
		tmp = (t_list *)malloc(sizeof(t_list));
		if (!tmp)
			return ;
		tmp->data = (*src)->data;
		tmp->index = (*src)->index;
		tmp->next = NULL;
		ft_add_front(dest, tmp);
		(*src) = (*src)->next;
	}
}
