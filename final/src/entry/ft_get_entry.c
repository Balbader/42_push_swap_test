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

/*
*	checks every argument, convert it and returns the converted argument
*/

#include "push_swap.h"

int	ft_get_entry(char *av, long int elem)
{
	ft_check_entry(av);
	elem = ft_convert_entry(av);
	if (elem > INT_MAX || elem < INT_MIN)
	{
		ft_putstr_fd("error\n", 2);
		exit(1);
	}
	return (elem);
}
