/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_string_utils.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 05:14:24 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/26 05:14:27 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_char(char c, int *tot_len)
{
	write(1, &c, 1);
	(*tot_len)++;
}

void	ft_print_str(char *str, int *tot_len)
{
	size_t	i;

	if (!str)
	{
		(*tot_len) = 0;
		return ;
	}
	i = 0;
	while (str[i] != '\0')
		++i;
	write(1, str, i);
	(*tot_len) += i;
}
