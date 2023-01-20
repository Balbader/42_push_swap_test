/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlist_print_reverse.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:35:19 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/12 16:35:26 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlist_print_reverse(t_dlist *dlist)
{
	t_dlist	*reverse_list;

	if (!dlist)
		return ;
	reverse_list = dlist;
	while (reverse_list->next != NULL)
		reverse_list = reverse_list->next;

}
