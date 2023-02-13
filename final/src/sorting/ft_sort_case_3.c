/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_case_3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:22:23 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/31 16:22:27 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_find_case_3(int arr[3])
{
	if ((arr[0] > arr[1]) && (arr[1] < arr[2]) && (arr[2] > arr[0]))
		return (1);
	else if ((arr[0] > arr[1]) && (arr[1] > arr[2]) && (arr[2] < arr[0]))
		return (2);
	else if ((arr[0] > arr[1]) && (arr[1] < arr[2]) && (arr[2] < arr[0]))
		return (3);
	else if ((arr[0] < arr[1]) && (arr[1] > arr[2]) && (arr[2] > arr[0]))
		return (4);
	else if ((arr[0] < arr[1]) && (arr[0] > arr[2]) && (arr[1] > arr[2]))
		return (5);
	else
		return (0);
}

void	ft_sort_case_3(t_list *stack_a)
{
	int	*arr;
	t_list *head;

	head = stack_a;
	arr = (int *)malloc(sizeof(int) * 3);
	if (!arr)
		return ;
	arr = ft_init_arr_3(stack_a, arr);
	ft_print_stack(&head, "stack_a");
	printf("\n");
	if (ft_find_case_3(arr) == 1)
	{
		ft_sa(&stack_a);
		stack_a = ft_re_init_index(stack_a);
		ft_print_stack(&stack_a, "stack_a");
		printf("\n");
	}
	else if (ft_find_case_3(arr) == 2)
	{
		ft_sa(&stack_a);
		ft_rra(&stack_a);
		stack_a = ft_re_init_index(stack_a);
		ft_print_stack(&stack_a, "stack_a");
		printf("\n");
	}
	else if (ft_find_case_3(arr) == 3)
	{
		ft_ra(&stack_a);
		ft_print_stack(&stack_a, "stack_a");
		stack_a = ft_re_init_index(stack_a);
		printf("\n");
	}
	else if (ft_find_case_3(arr) == 4)
	{
		ft_sa(&stack_a);
		ft_ra(&stack_a);
		stack_a = ft_re_init_index(stack_a);
		ft_print_stack(&stack_a, "stack_a");
		printf("\n");
	}
	else
	{
		ft_rra(&stack_a);
		stack_a = ft_re_init_index(stack_a);
		ft_print_stack(&stack_a, "stack_a");
		printf("\n");
	}
}
