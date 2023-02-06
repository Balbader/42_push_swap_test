/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_rand_stack.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 15:12:35 by baalbade          #+#    #+#             */
/*   Updated: 2023/02/04 15:12:52 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"
#include <stddef.h>

static void	ft_shuffle(int *arr, size_t n)
{
	size_t	i;
	size_t	j;
	int		t;

	if (n > 1)
	{
		srand(time(NULL));
		i = 0;
		while (i < n)
		{
			j = i + rand() / (RAND_MAX / (n - i) + 1);
			t = arr[j];
			arr[j] = arr[i];
			arr[i] = t;
			++i;
		}
	}
}

static int	*ft_init_rand_arr(int start, int end, int *arr)
{
	int	i;

	i = start;
	while (i < end)
	{
		arr[i] = i;
		++i;
	}
	ft_shuffle(arr, (end - start));
	return (arr);
}


t_list	*ft_init_rand_stack(int *rand_arr, int start, int end)
{
	t_list	*current;
	t_list	*rand_list;
	int		index;
	int		size;
	int		i;

	if (!rand_arr)
		return (NULL);
	size = end - start;
	rand_arr = ft_init_rand_arr(start, end, rand_arr);
	i = 0;
	index = 1;
	current = ft_create_node(rand_arr[i], index);
	rand_list = current;
	while (index < size)
	{
		++i;
		++index;
		current->next = ft_create_node(rand_arr[i], index);
		current = current->next;
	}
	return (rand_list);
}
