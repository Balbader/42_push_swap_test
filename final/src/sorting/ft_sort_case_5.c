/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_case_5.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:09:30 by baalbade          #+#    #+#             */
/*   Updated: 2023/02/01 16:09:32 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_case_5(t_list *stack_a, t_list *stack_b)
{
	int		stack_size;
	int		*arr;

	arr = (int *)malloc(sizeof(int) * 3);
	if (!arr)
		return ;
	stack_size = ft_get_stack_size(stack_a);
	ft_start_sorting(&stack_a, &stack_b, stack_size);
	arr = ft_init_arr_3(stack_a, arr);
	ft_sort_case_3(stack_a);
	ft_print_stack(&stack_a, "stack_a");
	printf("\n");
	ft_finish_sorting(&stack_a, &stack_b);
	ft_print_stack(&stack_a, "stack_a");
}
