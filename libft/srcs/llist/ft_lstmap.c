/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 13:45:15 by baalbade          #+#    #+#             */
/*   Updated: 2022/12/08 15:53:30 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*f_list;
	t_list	*n_list;

	if (!lst || !f)
		return (NULL);
	f_list = ft_lstnew((*f)(lst->content));
	if (!n_list)
		return (NULL);
	n_list = f_list;
	lst = lst->next;
	while (lst != NULL)
	{
		f_list->next = ft_lstnew((*f)(lst->content));
		if (!f_list->next)
		{
			ft_lstclear(&n_list, del);
			return (NULL);
		}
		f_list = f_list->next;
		lst = lst->next;
	}
	return (n_list);
}
