/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:39:08 by baalbade          #+#    #+#             */
/*   Updated: 2022/12/08 08:34:35 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *node)
{
	t_list	*current;
	t_list	*new_last;

	current = (t_list *)malloc(sizeof(t_list));
	if (!current)
		return ;
	current = *lst;
	while (current->next != NULL)
		current = current->next;
	new_last = (t_list *)malloc(sizeof(t_list));
	if (!new_last)
		return ;
	new_last = node;
	current->next = new_last;
}
