/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_main_arg.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 09:48:33 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/11 09:48:34 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_is_minus(int c)
{
	return (c == '-');
}

static void	ft_check_str(char *str)
{
	char	*err_message;
	int		i;

	err_message = "Error\n";
	if (!str)
	{
		ft_putstr_fd(err_message, 2);
		return ;
	}
	i = 0;
	if (ft_is_minus(str[i]))
		++i;
	while (str[i])
	{
		if (!ft_isalpha(str[i]))
		{
			ft_putstr_fd(err_message, 2);
			break ;
		}
		++i;
	}
}

void	ft_check_main_arg(int ac, char **av)
{
	int	i;

	if (ac <= 1)
	{
		ft_putstr_fd("Error\n", 2);
		return ;
	}
	i = 1;
	while (i < ac)
	{
		ft_check_str(av[i]);
		++i;
	}
}
