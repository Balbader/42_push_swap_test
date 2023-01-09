/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 15:29:57 by baalbade          #+#    #+#             */
/*   Updated: 2022/08/29 15:38:42 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{	
	t_list	*n_lst;
	t_list	*f_lst;

	if (!lst)
		return (NULL);
	n_lst = ft_lstnew((*f)(lst->content));
	if (!n_lst)
		return (NULL);
	f_lst = n_lst;
	lst = lst->next;
	while (lst != NULL)
	{
		n_lst->next = ft_lstnew((*f)(lst->content));
		if (!n_lst->next)
		{
			ft_lstclear(&f_lst, del);
			return (NULL);
		}
		n_lst = n_lst->next;
		lst = lst->next;
	}
	return (f_lst);
}
