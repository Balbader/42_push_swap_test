/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 12:02:13 by baalbade          #+#    #+#             */
/*   Updated: 2022/12/16 10:47:57 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
