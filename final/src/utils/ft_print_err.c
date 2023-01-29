/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_err.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 19:28:16 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/29 19:28:46 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_err(t_dblist **stack_a, t_dblist **stack_b)
{
	if (*stack_a == NULL)
		ft_free_stack(stack_a);
	if (*stack_b == NULL)
		ft_free_stack(stack_b);
	ft_putstr_fd("Error\n", 2);
	exit (1);
}
