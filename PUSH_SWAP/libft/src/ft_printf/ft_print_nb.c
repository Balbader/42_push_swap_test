/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nb.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 11:01:16 by baalbade          #+#    #+#             */
/*   Updated: 2022/12/16 10:47:40 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_nb(int nb, int *tot_len)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		(*tot_len) += 11;
		return ;
	}
	if (nb < 0)
	{
		ft_print_char('-', tot_len);
		ft_print_nb(nb * -1, tot_len);
	}
	else
	{
		if (nb > 9)
			ft_print_nb(nb / 10, tot_len);
		ft_print_char(nb % 10 + '0', tot_len);
	}
}
