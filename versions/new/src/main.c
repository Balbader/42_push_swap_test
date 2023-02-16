/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 21:47:54 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/25 21:47:56 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	int		*entries;
	int		i;
	int		j;

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
	// for (i = 1; i < ac; ++i) {
	// 	ft_printf("%d\n", entries[i]);
	// }
	return (0);
}
