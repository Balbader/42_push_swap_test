/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_entry.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 00:53:13 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/26 00:53:14 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_process_entry(int ac, char **av)
{
	int	*entries;
	int	i;
	int	j;

	entries = (int *)ft_calloc(ac, sizeof(int));
	if (!entries)
		return (0);
	j = 0;
	i = 1;
	if (ac > 1)
	{
		while (i < ac)
		{
			entries[i] = ft_get_entry(av, entries[j], i);
			++j;
			++i;
		}
	}
	return (entries);
}
