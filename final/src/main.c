/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 10:36:15 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/30 10:36:18 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


// static int	ft_check_av(int ac, char **av)
// {
// 	int	i;

// 	i = 1;
// 	while (i < ac)
// 	{
// 		ft_check_entry(av[i]);
// 		++i;
// 	}
// 	return (0);
// }

// static int	*ft_init_entries_arr(int ac, char **av)
// {
// 	int			*arr;
// 	int			arr_size;
// 	long int	elem;
// 	int			i;
// 	int			j;

// 	arr_size = ac - 1;
// 	arr = (int *)malloc(sizeof(int) * arr_size);
// 	if (!arr)
// 		return (0);
// 	elem = 0;
// 	j = 1;
// 	i = 0;
// 	while (i < arr_size)
// 	{
// 		elem = ft_get_entry(av[j], elem);
// 		arr[i] = elem;
// 		++i;
// 		++j;
// 	}
// 	ft_look_for_doubles(arr, arr_size);
// 	return (arr);
// }

// int	main(int ac, char **av)
int	main(void)
{
	t_list	*stack_a;

	t_list	*stack_b = NULL;

	int		*rand_arr;
	int		size;

	size = 12;
	rand_arr = (int *)malloc(sizeof(int) * size);
	if (!rand_arr)
		return (0);
	stack_a = ft_init_rand_stack(rand_arr, 1, size);
	stack_b = stack_a;

	printf("\nBefore Sort:\n");
	ft_print_stack(&stack_a, "main_stack_a");
	printf("\n\n");

	// stack_a = ft_pre_sort_stack(stack_a);
	// printf("\nAfter pre Sort:\n");
	// ft_print_stack(&stack_a, "pre_sorted_stack_a");

	// stack_a = ft_re_init_index(stack_a);
	// printf("\nAfter pre Sort:\n");
	// ft_print_stack(&stack_a, "re_init_idx_stack_a");

	ft_sort_stack(&stack_a, &stack_b);

	printf("\n\n");
	printf("After Sort:\n\n");
	ft_print_stack(&stack_a, "stack_a");
	printf("\n");
	ft_print_stack(&stack_b, "stack_b");
	return (0);
}
