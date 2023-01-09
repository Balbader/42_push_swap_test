/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlist_is_asc_sorted.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-lez <ple-lez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 13:42:58 by ple-lez           #+#    #+#             */
/*   Updated: 2022/11/19 18:50:10 by ple-lez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Returns 1 if dlist is sorted in non-descending order, else 0
// f is a pointer on a function used to compare 2 elements of the dlist
// f should return 0 if elements are considered equal
// else a positive or negative number depending on which element is
// greater than the other
// function considers that an empty list is sorted
int	ft_dlist_is_asc_sorted(t_dlist *dlist, int (*f)(void *, void *))
{
	if (!dlist || !dlist->next)
		return (1);
	if (f(dlist->data, dlist->next->data) <= 0)
		return (ft_dlist_is_asc_sorted(dlist->next, f));
	return (0);
}
