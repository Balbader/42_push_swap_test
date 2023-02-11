/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 14:04:19 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/18 14:04:32 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rrr(t_list **stack_a, t_list **stack_b, int hit_count)
{
	ft_reverse_rotate_stack(stack_a);
	ft_reverse_rotate_stack(stack_b);
	hit_count += 1;
	ft_putstr_fd("rrr\n", 1);
}
