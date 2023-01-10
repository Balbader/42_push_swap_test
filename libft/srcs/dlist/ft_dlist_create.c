/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlist_create.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:12:43 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/10 17:12:46 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dlist	*ft_dlist_create(void *data)
{
	t_dlist	*res;

	res = (t_dlist *)ft_calloc(1, sizeof(t_dlist));
	if (!res)
		return (NULL);
	res->next = NULL;
	res->prev = NULL;
	res->data = data;
	return (res);
}
