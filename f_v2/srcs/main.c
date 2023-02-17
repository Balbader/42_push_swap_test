/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 08:16:11 by baalbade          #+#    #+#             */
/*   Updated: 2023/02/17 08:16:13 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(void)
{
	t_list	*a = NULL;
	// int		arr[3];
	// int		size;

	// size = 3;
	// ra = (int *)malloc(sizeof(int) * size);
	// if (!ra)
	// 	return (0);
	// a = ft_init_rand_stack(ra, 1, size);
	// // a = ft_pre_sort_stack(a);
	
	int arr[3] = {1, 2, 3};
	// int arr[3] = {1, 3, 2};
	// int arr[3] = {2, 3, 1};
	// int arr[3] = {2, 1, 3};
	// int arr[3] = {3, 1, 2};
	// int arr[3] = {3, 2, 1};
	a = ft_init_stack_a(a, arr, 3);
	ft_sort_3(a, arr);
	ft_print_stack(&a, "a");
	return (0);
}
