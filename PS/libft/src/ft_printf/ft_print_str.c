/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 10:47:24 by baalbade          #+#    #+#             */
/*   Updated: 2022/12/16 10:48:07 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
