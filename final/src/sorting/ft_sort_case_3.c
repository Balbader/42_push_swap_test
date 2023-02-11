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
	return (0);
}

t_list	*ft_sort_case_3(t_list *stack_a)
{
	int	*arr;

	arr = (int *)malloc(sizeof(int) * 3);
	if (!arr)
		return (0);
	arr = ft_init_arr_3(stack_a, arr);
	if (ft_find_case_3(arr) == 1)
		ft_sa(&stack_a);
	else if (ft_find_case_3(arr) == 2)
	{
		ft_sa(&stack_a);
		ft_rra(&stack_a);
	}
	else if (ft_find_case_3(arr) == 3)
		ft_ra(&stack_a);
	else if (ft_find_case_3(arr) == 4)
	{
		ft_sa(&stack_a);
		ft_ra(&stack_a);
	}
	else if (ft_find_case_3(arr) == 5)
		ft_rra(&stack_a);
	return (stack_a);
}
