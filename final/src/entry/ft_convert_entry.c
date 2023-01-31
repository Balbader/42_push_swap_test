/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_entry.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:41:05 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/16 13:41:07 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Convert entry from string to digit
*/

#include "push_swap.h"

long int	ft_convert_entry(const char *av)
{
	long int	sign;
	long int	nb;
	long int	i;

	sign = 1;
	nb = 0;
	i = 0;
	if (av[i] == '+')
		++i;
	else if (av[i] == '-')
	{
		sign *= -1;
		++i;
	}
	while (ft_isdigit(av[i]))
	{
		nb *= 10;
		nb += (av[i] - '0');
		++i;
	}
	return (nb * sign);
}
