/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_new_tail.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 16:20:31 by baalbade          #+#    #+#             */
/*   Updated: 2023/02/09 16:20:34 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_add_new_tail(t_list **lst, t_list *node)
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
