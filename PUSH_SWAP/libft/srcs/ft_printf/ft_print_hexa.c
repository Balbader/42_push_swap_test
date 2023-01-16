/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 11:23:12 by baalbade          #+#    #+#             */
/*   Updated: 2022/12/20 07:44:20 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hexa(unsigned int nb, char c, int *tot_len)
{
	char	*base_16;
	char	str[4096];
	int		i;

	if (c == 'x')
		base_16 = "0123456789abcdef";
	else
		base_16 = "0123456789ABCDEF";
	if (nb == 0)
	{
		ft_print_char('0', tot_len);
		return ;
	}
	i = 0;
	while (nb != 0)
	{
		str[i] = base_16[nb % 16];
		nb /= 16;
		++i;
	}
	while (i--)
		ft_print_char(str[i], tot_len);
}
