/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlist_create.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-lez <ple-lez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 10:29:02 by ple-lez           #+#    #+#             */
/*   Updated: 2022/11/19 10:38:23 by ple-lez          ###   ########.fr       */
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
