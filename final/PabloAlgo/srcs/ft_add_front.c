/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_front.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 07:28:13 by baalbade          #+#    #+#             */
/*   Updated: 2023/02/09 07:28:18 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"

void	ft_add_front(t_list **lst, t_list *node)
{
	t_list	*new_head;

	new_head = (t_list *)malloc((sizeof(t_list)));
	new_head = node;
	new_head->next = *lst;
	*lst = new_head;
}
