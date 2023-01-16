/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_entry.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 14:27:55 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/12 14:28:05 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_get_entry(int ac, char **av)
{
	int	*arr;
	int	j;
	int	i;

	arr = (int *)malloc(sizeof(int) * (ac));
	if (!arr)
		return (0);
	j = 1;
	i = 0;
	while (j < ac)
	{
		arr[i] = ft_atoi(av[j]);
		++j;
		++i;
	}
	arr[i] = 0;
	return (arr);
}
