/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 13:27:50 by baalbade          #+#    #+#             */
/*   Updated: 2022/12/06 14:04:40 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_sign(char c)
{
	return (c == '-' || c == '+');
}

int	ft_atoi(const char *str)
{
	int	sign;
	int	res;
	int	i;

	res = 0;
	sign = 1;
	i = 0;
	if (ft_is_sign(str[i]) && ft_is_sign(str[i + 1]))
		return (0);
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * sign);
}
