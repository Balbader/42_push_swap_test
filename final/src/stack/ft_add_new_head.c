/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_new_head.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 16:20:19 by baalbade          #+#    #+#             */
/*   Updated: 2023/02/09 16:20:22 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_add_new_head(t_list **lst, t_list *node)
{
	t_list	*new_head;

	new_head = (t_list *)malloc((sizeof(t_list)));
	new_head = node;
	new_head->next = *lst;
	*lst = new_head;
}
