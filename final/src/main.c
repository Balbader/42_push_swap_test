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


static int	ft_check_av(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		ft_check_entry(av[i]);
		++i;
	}
	return (0);
}

static int	*ft_init_entries_arr(int ac, char **av)
{
	int		*arr;
	int		arr_size;
	int		elem;
	int		i;
	int		j;

	arr_size = ac - 1;
	arr = (int *)malloc(sizeof(int) * arr_size);
	if (!arr)
		return (0);
	elem = 0;
	j = 1;
	i = 0;
	while (i < arr_size)
	{
		elem = ft_get_entry(av[j], elem);
		arr[i] = elem;
		++i;
		++j;
	}
	ft_look_for_doubles(arr, arr_size);
	return (arr);
}

int	main(int ac, char **av)
{
	t_list	*stack_a;
	// t_list	*stack_b;
	int		*entries;

	if (ac < 2)
		return (0);
	stack_a = NULL;
	// stack_b = NULL;
	ft_check_av(ac, av);
	entries = ft_init_entries_arr(ac, av);
	stack_a = ft_init_stack_a(stack_a, entries, ac);
	while (stack_a->next != NULL) {
		printf("stack_a[%d]: %d\n", stack_a->index, stack_a->data);
		stack_a = stack_a->next;
	}
	return (0);
}
