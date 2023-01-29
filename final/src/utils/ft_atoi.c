/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 18:52:22 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/29 18:52:24 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long int	ft_atoi(const char *str)
{
	long int	sign;
	long int	nb;
	long int	i;

	sign = 1;
	nb = 0;
	i = 0;
	if (str[i] == '+')
		++i;
	else if (str[i] == '-')
	{
		sign *= -1;
		++i;
	}
	while (ft_isdigit(str[i]))
	{
		nb *= 10;
		nb += (str[i] - '0');
		++i;
	}
	return (nb * sign);
}
