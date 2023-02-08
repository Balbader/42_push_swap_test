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
	// t_list	*middle_node;
	t_list	*stack_b;
	// t_list	*head_b;
	// int		*entries;
	int		*rand_arr;
	int		size;

	// if (ac < 2)
	// 	return (0);
	stack_a = NULL;
	// middle_node = NULL;
	stack_b = (t_list *)malloc(sizeof(t_list));
	if (!stack_b)
		return (0);

	// ft_check_av(ac, av);

	// entries = ft_init_entries_arr(ac, av);
	// stack_a = ft_init_stack_a(stack_a, entries, ac - 1);
	//
	size = 100;
	rand_arr = (int *)malloc(sizeof(int) * size);
	if (!rand_arr)
		return (0);
	stack_a = ft_init_rand_stack(rand_arr, 1, size);
	printf("\ninitial stack:\n\n");
	ft_print_stack(&stack_a, "rand_stack");
	printf("\n\n");
	// middle_node = ft_find_middle_node(stack_a);
	// printf("middle_node->data: %d\n", middle_node->data);
	// printf("middle_node->index: %d\n", middle_node->index);
	// printf("\n\n");
	ft_split_stack(stack_a, stack_b);
	printf("\n\n");
	printf("After Split:\n\n");
	ft_print_stack(&stack_a, "stack_a");
	printf("\n\n");
	printf("stack b:\n\n");
	ft_print_stack(&stack_b, "stack_b");
	printf("\n\n");

	if (ft_stack_is_sorted(stack_a))
		return (0);
	// else if (ac - 1 == 2)
	// 	ft_sa(&stack_a);
	// else if (ac - 1 == 3)
	// 	stack_a = ft_sort_case_3(rand_arr, stack_a);
	// else if (ac - 1 == 4)
	// 	stack_a = ft_sort_case_4(stack_a, stack_b);
	// else if (ac - 1 == 5)
	// 	stack_a = ft_sort_case_5(stack_a, stack_b);
	return (0);
}
