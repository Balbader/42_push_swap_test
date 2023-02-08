/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ss.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 14:05:48 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/18 14:05:57 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"

void	ft_ss(t_list *stack_a, t_list *stack_b)
{
	ft_swap_stack(stack_a);
	ft_swap_stack(stack_b);
	// ft_putstr_fd("ss\n", 1);
	printf("ss\n");
}
