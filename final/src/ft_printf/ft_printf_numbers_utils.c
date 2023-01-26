/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_numbers_utils.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 05:14:48 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/26 05:14:50 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void	ft_print_ptr(size_t ptr, int *tot_len)
{
	char	*base_16;
	char	ptr_str[4096];
	int		i;

	base_16 = "0123456789abcdef";
	i = 0;
	if (ptr == 0)
	{
		ft_print_str("(nil)", tot_len);
		return ;
	}
	ft_print_str("0x", tot_len);
	while (ptr != 0)
	{
		ptr_str[i] = base_16[ptr % 16];
		ptr /= 16;
		++i;
	}
	ptr_str[i] = '\0';
	while (i--)
		ft_print_char(ptr_str[i], tot_len);
}

void	ft_print_unsigned(unsigned int u, int *tot_len)
{
	if (u >= 10)
		ft_print_unsigned(u / 10, tot_len);
	ft_print_char(u % 10 + '0', tot_len);
}
