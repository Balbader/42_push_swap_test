/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_convert_entry.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:33:20 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/18 12:33:23 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ft_test_convert_entry(char *str)
{
	int	res_atoi;
	int	res_ft;
	
	res_ft = ft_convert_entry(str);
	res_atoi = atoi(str);
	if (res_ft == res_atoi)
		printf("%s: success!\n", str);
	else
		printf("%s: failed!\n res_ft: %d\n res_atoi: %d\n", str, res_ft, res_atoi);
}

// int	main(void)
// {

// 	ft_test_convert_entry("0");
// 	ft_test_convert_entry("1");
// 	ft_test_convert_entry("10");
// 	ft_test_convert_entry("492");
// 	ft_test_convert_entry("237485983478");
// 	ft_test_convert_entry("-1");
// 	ft_test_convert_entry("a");
// 	ft_test_convert_entry("abc");
// 	ft_test_convert_entry("abc123");
// 	ft_test_convert_entry("+abc123");
// 	ft_test_convert_entry("-abc123");
// 	ft_test_convert_entry("123abc123");
// 	ft_test_convert_entry("-123abc123");
// 	ft_test_convert_entry("+123abc123");
// 	ft_test_convert_entry("+-123abc123");
// 	ft_test_convert_entry("-+123abc123");
// 	ft_test_convert_entry("-+1234567891234567");
// 	ft_test_convert_entry("1234567891234567");
// 	ft_test_convert_entry("+1234567891234567");
// 	ft_test_convert_entry("-1234567891234567");
// 	ft_test_convert_entry("        1234567891234567");
// 	ft_test_convert_entry("        +1234567891234567");
// 	ft_test_convert_entry("        -1234567891234567");
// 	ft_test_convert_entry("");
// 	ft_test_convert_entry("-");
// 	ft_test_convert_entry("+");
// 	ft_test_convert_entry("-----------");
// 	ft_test_convert_entry("++++++++++++");
// 	ft_test_convert_entry("              ");
// 	return (0);
// }
