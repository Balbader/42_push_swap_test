/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 07:26:11 by baalbade          #+#    #+#             */
/*   Updated: 2022/12/08 08:08:20 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last_node;

	last_node = (t_list *)malloc(sizeof(t_list));
	if (!last_node)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	last_node = lst;
	return (last_node);
}
