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

#include "sort.h"

void	ft_pb(t_list *stack_a, t_list *stack_b)
{
	ft_push_node(stack_b, stack_a);
	ft_del_head_node(stack_a);
	// ft_putstr_fd("pb\n", 1);
	printf("pb\n");
}
