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

	stack_size = ft_get_stack_size(stack_a);
	printf("ft_start_sorting:\n\n");
	ft_start_sorting(&stack_a, &stack_b, stack_size);

	printf("\n");

	printf("ft_sort_case_3:\n\n");
	ft_sort_case_3(stack_a);

	printf("stack_b:\n");
	ft_print_stack(&stack_b, "stack_b");

	printf("\n");
	printf("\n");

	printf("ft_finish_sorting_5:\n\n");
	ft_finish_sorting_5(&stack_a, &stack_b);
}
