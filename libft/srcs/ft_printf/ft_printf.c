/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 08:50:15 by baalbade          #+#    #+#             */
/*   Updated: 2022/12/19 08:13:30 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_check_sign(char sign, va_list *arg, int *tot_len, int *i)
{
	char	*str;

	if (sign == 's')
	{
		str = va_arg(*arg, char *);
		if (str == NULL)
			str = "(null)";
		ft_print_str(str, tot_len);
	}
	else if (sign == 'd' || sign == 'i')
		ft_print_nb(va_arg(*arg, int), tot_len);
	else if (sign == 'u')
		ft_print_unsigned(va_arg(*arg, unsigned int), tot_len);
	else if (sign == 'x')
		ft_print_hexa(va_arg(*arg, unsigned int), 'x', tot_len);
	else if (sign == 'X')
		ft_print_hexa(va_arg(*arg, unsigned int), 'X', tot_len);
	else if (sign == 'p')
		ft_print_ptr(va_arg(*arg, size_t), tot_len);
	else if (sign == 'c')
		ft_print_char(va_arg(*arg, int), tot_len);
	else if (sign == '%')
		ft_print_char('%', tot_len);
	else
		(*i)--;
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		tot_len;
	int		i;

	if (!str)
		return (-1);
	tot_len = 0;
	i = 0;
	va_start(arg, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			ft_check_sign(str[i], &arg, &tot_len, &i);
			i++;
		}
		else
		{
			ft_print_char((char)str[i], &tot_len);
			i++;
		}
		va_end(arg);
	}
	return (tot_len);
}
