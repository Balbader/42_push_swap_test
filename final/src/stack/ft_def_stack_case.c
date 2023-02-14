/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_def_stack_case.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 08:48:06 by baalbade          #+#    #+#             */
/*   Updated: 2023/02/13 08:48:08 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_def_stack_case(t_list *stack_a, t_list *stack_b)
{
	int	stack_size;

	stack_size = ft_get_stack_size(stack_a);
	if (stack_size <= 3 )
		ft_sort_case_3(stack_a);
	else if (stack_size == 4)
		ft_sort_case_4(stack_a, stack_b);
	else if (stack_size == 5)
		ft_sort_case_5(stack_a, stack_b);
	// else if (stack_size == 100)
	// 	ft_sort_case_100(stack_a, stack_b);
	// else if (stack_size == 500)
	// 	ft_sort_case_500(stack_a, stack_b);
	else
		ft_sort_stack(&stack_a, &stack_b);
}
