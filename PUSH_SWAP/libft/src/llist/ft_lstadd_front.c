/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 13:17:50 by baalbade          #+#    #+#             */
/*   Updated: 2022/12/08 08:45:02 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *node)
{
	t_list	*new_head;

	new_head = (t_list *)malloc((sizeof(t_list)));
	new_head = node;
	new_head->next = *lst;
	*lst = new_head;
}
