/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_entry.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 11:09:05 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/16 11:09:13 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_entry(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '-')
			++i;
		else if (str[i] == '-' && (!ft_isdigit(str[i + 1])))
		{
			ft_putstr_fd("Error\n", 2);
			break ;
		}
		if (!ft_isdigit(str[i]))
		{
			ft_putstr_fd("Error\n", 2);
			break ;
		}
		++i;
	}
	return (0);
}
