/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 14:03:03 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/18 14:03:21 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_list **stack_a, int hit_count)
{
	ft_reverse_rotate_stack(stack_a);
	hit_count += 1;
	ft_putstr_fd("rra\n", 1);
}
