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

int	ft_get_entry(char **av, int elem, int i)
{
	if (ft_check_entry(av[i]) == 1)
	{
		ft_putstr_fd("Error\n", 2);
		return (1);
	}
	else
	{
		elem = ft_convert_entry(av[i]);
		return (elem);
	}
}
