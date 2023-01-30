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

#include "push_swap.h"

int	ft_convert_entry(const char *str)
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
