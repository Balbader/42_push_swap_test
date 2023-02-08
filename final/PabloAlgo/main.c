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

static void	ft_print_stack(t_list **stack, char *name)
{
	t_list	*temp;

	temp = *stack;
	while (temp)
	{
		printf("%s[%d]: %d\n", name, temp->index, temp->data);
		temp = temp->next;
	}
}

int	main(void)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		*rand_arr;
	int		size;

	size = 20;
	rand_arr = (int *)malloc(sizeof(int) * size);
	if (!rand_arr)
		return (0);
	stack_b = (t_list *)malloc(sizeof(t_list));
	if (!stack_b)
		return (0);
	stack_a = ft_init_rand_stack(rand_arr, 0, size);
	stack_a = ft_pre_sort_stack(stack_a);
	ft_print_stack(&stack_a, "stack_a");
	printf("\n\n");
	ft_pb(stack_a, stack_b);
	printf("\n\n");
	ft_print_stack(&stack_b, "stack_b");
	printf("\n");
	ft_print_stack(&stack_a, "stack_a");
	return (0);
}
