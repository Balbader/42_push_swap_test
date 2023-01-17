/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_convert_entry.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:41:55 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/16 13:41:56 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_convert_entry.c"
#include <stdio.h>
#include <stdlib.h>

void	test_ft_convert_entry(char *str)
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

int	main(void)
{

	test_ft_convert_entry("0");
	test_ft_convert_entry("1");
	test_ft_convert_entry("10");
	test_ft_convert_entry("492");
	test_ft_convert_entry("237485983478");
	test_ft_convert_entry("-1");
	test_ft_convert_entry("a");
	test_ft_convert_entry("abc");
	test_ft_convert_entry("abc123");
	test_ft_convert_entry("+abc123");
	test_ft_convert_entry("-abc123");
	test_ft_convert_entry("123abc123");
	test_ft_convert_entry("-123abc123");
	test_ft_convert_entry("+123abc123");
	test_ft_convert_entry("+-123abc123");
	test_ft_convert_entry("-+123abc123");
	test_ft_convert_entry("-+1234567891234567");
	test_ft_convert_entry("1234567891234567");
	test_ft_convert_entry("+1234567891234567");
	test_ft_convert_entry("-1234567891234567");
	test_ft_convert_entry("        1234567891234567");
	test_ft_convert_entry("        +1234567891234567");
	test_ft_convert_entry("        -1234567891234567");
	test_ft_convert_entry("");
	test_ft_convert_entry("-");
	test_ft_convert_entry("+");
	test_ft_convert_entry("-----------");
	test_ft_convert_entry("++++++++++++");
	test_ft_convert_entry("              ");
	return (0);
}
