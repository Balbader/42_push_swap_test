/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 14:02:37 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/18 14:02:49 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"

void	ft_rr(t_list *stack_a, t_list *stack_b)
{
	ft_rotate_stack(stack_a);
	ft_rotate_stack(stack_b);
	// ft_putstr_fd("rr\n", 1);
	printf("rr\n");
}
