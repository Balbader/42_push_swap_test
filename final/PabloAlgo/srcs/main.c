/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 12:22:52 by baalbade          #+#    #+#             */
/*   Updated: 2023/02/06 12:22:54 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"

// static t_list	*ft_re_init_index(t_list *stack)
// {
// 	int		i;
// 	t_list	*head;

// 	head = stack;
// 	i = 1;
// 	while (stack)
// 	{
// 		stack->index = i;
// 		stack = stack->next;
// 		++i;
// 	}
// 	return (head);
// }

int	main(void)
{
	t_list	*stack_a;

	t_list	*stack_b = NULL;

	int		*rand_arr;
	int		size;

	size = 20;
	rand_arr = (int *)malloc(sizeof(int) * size);
	if (!rand_arr)
		return (0);
	stack_a = ft_init_rand_stack(rand_arr, 0, size);
	stack_a = ft_pre_sort_stack(stack_a);
	// stack_a = ft_re_init_index(stack_a);

	printf("Before Operation:\n");
	ft_print_stack(&stack_a, "stack_a");
	printf("\n\n");

	for (int i = 0; i < 10; ++ i) {
		ft_pb(&stack_a, &stack_b);
	}
	// ft_rra(&stack_a);
	// ft_ra(&stack_a);
	// ft_sa(stack_a);

	printf("After Operation:\n");
	printf("\n\n");
	ft_print_stack(&stack_b, "stack_b");
	printf("\n\n");
	ft_print_stack(&stack_a, "stack_a");
	return (0);
}
