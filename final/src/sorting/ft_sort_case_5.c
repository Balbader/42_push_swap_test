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

static void	ft_print(t_list **stack, char *name)
{
	t_list	*temp;

	temp = *stack;
	while (temp)
	{
		printf("%s[%d]: %d\n", name, temp->index, temp->data);
		temp = temp->next;
	}
}

t_list	*ft_sort_case_5(t_list *stack_a, t_list *stack_b)
{
	int		stack_size;
	int		*arr;

	stack_size = ft_get_stack_size(stack_a);
	ft_start_sorting(&stack_a, &stack_b, stack_size);
	arr = ft_init_arr_3(stack_a);
	stack_a = ft_sort_case_3(arr, stack_a);
	ft_print(&stack_a, "stack_a");
	printf("\n");
	ft_finish_sorting(&stack_a, &stack_b);
	ft_print(&stack_a, "stack_a");
	return (stack_a);
}
