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
	t_list	*rand_stack = NULL;
	t_list	*pre_sorted_stack = NULL;
	// t_list	*temp;
	int		*rand_arr;
	int		size;

	size = 20;
	rand_arr = (int *)malloc(sizeof(int) * size);
	if (!rand_arr)
		return (0);
	rand_stack = ft_init_rand_stack(rand_arr, 0, size);
	// temp = rand_stack;
	ft_print_stack(&rand_stack, "rand_stack");
	printf("\n\n");
	pre_sorted_stack = ft_pre_sort_stack(rand_stack);
	ft_print_stack(&pre_sorted_stack, "pre_sorted_stack");
	return (0);
}
