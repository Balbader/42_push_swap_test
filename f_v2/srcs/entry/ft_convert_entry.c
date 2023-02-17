/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_entry.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 09:35:51 by baalbade          #+#    #+#             */
/*   Updated: 2023/02/17 09:35:52 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
