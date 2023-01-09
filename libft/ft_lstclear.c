/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 10:49:59 by baalbade          #+#    #+#             */
/*   Updated: 2022/08/28 11:02:26 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ptr;
	t_list	*next;

	ptr = *lst;
	*lst = NULL;
	while (ptr != NULL)
	{
		next = ptr->next;
		(*del)(ptr->content);
		free(ptr);
		ptr = next;
	}
}
