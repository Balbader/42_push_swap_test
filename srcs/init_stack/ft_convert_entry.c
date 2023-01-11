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

// #include "push_swap.h"
#include <stdlib.h>

static int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

static int	ft_is_sign(int c)
{
	return ((c == '-') || (c == '+'));
}

static int	ft_atoi(const char *str)
{
	int	sign;
	int	res;
	int	i;

	sign = 1;
	res = 0;
	i = 0;
	if (ft_is_sign(str[i]) && ft_is_sign(str[i + 1]))
		return (0);
	if (str[i] == '-')
	{
		sign *= -1;
		++i;
	}
	else if (str[i] == '+')
		++i;
	while (str[i] && ft_isdigit(str[i]))
	{
		res = res * 10 + str[i] - '0';
		++i;
	}
	return (res * sign);
}

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
