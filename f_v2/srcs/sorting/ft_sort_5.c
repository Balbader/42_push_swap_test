/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_5.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 11:11:12 by baalbade          #+#    #+#             */
/*   Updated: 2023/02/17 11:11:14 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_5(t_list *stack_a, t_list *stack_b)
{
	int		stack_size;

	stack_size = ft_get_stack_size(stack_a);
	ft_start_sorting(&stack_a, &stack_b, stack_size);
	ft_sort_3(stack_a);
	ft_finish_sorting(&stack_a, &stack_b);
}
