/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 07:28:45 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/20 07:28:52 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int	main(void)
{
		ft_test_check_entry("0");
		ft_printf("\n");
		ft_test_check_entry("A");
		ft_printf("\n");
		ft_test_check_entry(" ");
		ft_printf("\n");
		ft_test_check_entry("        ");
		ft_printf("\n");
		ft_test_check_entry("12345678");
		ft_printf("\n");
		ft_test_check_entry("-12345678");
		ft_printf("\n");
		ft_test_check_entry("abc12345678");
		ft_printf("\n");
		ft_printf("main.c executed!");
	return (0);
}
