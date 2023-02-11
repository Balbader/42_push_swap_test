/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 14:00:32 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/18 14:00:47 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pb(t_list **stack_a, t_list **stack_b, int hit_count)
{
	ft_push_node(stack_a, stack_b);
	hit_count += 1;
	ft_putstr_fd("pb\n", 1);
}
