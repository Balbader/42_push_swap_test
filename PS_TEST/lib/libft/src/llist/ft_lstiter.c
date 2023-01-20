/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 12:52:32 by baalbade          #+#    #+#             */
/*   Updated: 2022/12/08 13:40:13 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current;

	current = (t_list *)malloc(sizeof(t_list));
	if (!current)
		return ;
	current = lst;
	while (current != NULL)
	{
		(*f)(current->content);
		current = current->next;
	}
}
