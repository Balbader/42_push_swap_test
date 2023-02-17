/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 09:04:36 by baalbade          #+#    #+#             */
/*   Updated: 2023/02/17 09:04:38 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rr(t_list *stack_a, t_list *stack_b)
{
	ft_rotate_stack(stack_a);
	ft_rotate_stack(stack_b);
	ft_putstr_fd("rr\n", 1);
}
