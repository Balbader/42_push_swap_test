/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 09:04:08 by baalbade          #+#    #+#             */
/*   Updated: 2023/02/17 09:04:13 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rrr(t_list **stack_a, t_list **stack_b)
{
	ft_reverse_rotate_stack(stack_a);
	ft_reverse_rotate_stack(stack_b);
	ft_putstr_fd("rrr\n", 1);
}
