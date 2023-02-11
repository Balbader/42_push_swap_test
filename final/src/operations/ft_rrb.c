/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 14:03:38 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/18 14:03:51 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rrb(t_list **stack_b, int hit_count)
{
	ft_reverse_rotate_stack(stack_b);
	hit_count += 1;
	ft_putstr_fd("rrb\n", 1);
}
