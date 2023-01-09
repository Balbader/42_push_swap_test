/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quicksort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 09:53:28 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/09 09:53:35 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	quicksort(int nbs[10], int low, int high)
{
	int	pivot;
	int	i;
	int	j;

	if (low < high)
	{
		pivot = low;
		i = low;
		j = high;
		while (i < j)
		{
			while (nbs[i] <= nbs[pivot] && i < high)
				i++;
			while (nbs[j] > nbs[pivot])
				j--;
			if (i < j)
				ft_swap(&nbs[i], &nbs[j]);
		}
		ft_swap(&nbs[pivot], &nbs[j]);
		quicksort(nbs, low, j - 1);
		quicksort(nbs, j + 1, high);
	}
}

int	main(void)
{
	int	i;
	int	arr_length;
	int	nb[10] = {8, 9, 1, -433, 5, 2, -23, 7, 6, 0};

	arr_length = sizeof(nb) / sizeof(nb[0]);
	i = 0;
	while (i < 10)
	{
		printf("   Arr[%d]: %d\n", i, nb[i]);
		++i;
	}

	quicksort(nb, 0, arr_length);
	printf("\n");

	i = 0;
	while (i < 10)
	{
		printf("   Arr[%d]: %d\n", i, nb[i]);
		++i;
	}
	return (0);
}
