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
	t_list	*stack_b;
	int		*rand_arr;
	int		size;

	size = 5;
	rand_arr = (int *)malloc(sizeof(int) * size);
	if (!rand_arr)
		return (0);
	stack_a = ft_init_rand_stack(rand_arr, 1, size);
	stack_b = NULL;
	if (ft_stack_is_sorted(stack_a) == 1)
		exit(1);

	printf("\nMAIN - Stack A before:\n");
	ft_print_stack(&stack_a, "stack_a");
	printf("\n\n");


	// // ft_sort_case_3(stack_a);
	// ft_sort_case_4(stack_a, stack_b);
	ft_sort_case_5(stack_a, stack_b);

	// printf("\nMAIN - Stack A after Sort:\n");
	// ft_print_stack(&stack_a, "stack_a");

	return (0);
}
