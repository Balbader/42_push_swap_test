/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_entry.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 08:51:40 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/11 08:51:42 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	*ft_convert_entry(int ac, char **av)
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
