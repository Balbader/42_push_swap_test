/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 14:05:10 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/18 14:05:32 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sb(t_list **stack_b, int hit_count)
{
	ft_swap_stack(*stack_b);
	hit_count += 1;
	ft_putstr_fd("sb\n", 1);
}
