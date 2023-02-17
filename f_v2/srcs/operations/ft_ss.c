/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ss.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 09:12:24 by baalbade          #+#    #+#             */
/*   Updated: 2023/02/17 09:12:25 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ss(t_list *stack_a, t_list *stack_b)
{
	ft_swap_stack(stack_a);
	ft_swap_stack(stack_b);
	ft_putstr_fd("ss\n", 1);
}
