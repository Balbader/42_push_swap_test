/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_entry.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 10:12:48 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/24 10:12:50 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_get_entry(char ac, char *av[])
{
	int	*entries;
	int i;

	entries = (int *)malloc(sizeof(int) * (ac - 1));
	if (!entries)
		return (0);
	i = 0;

	return (entries);
}
