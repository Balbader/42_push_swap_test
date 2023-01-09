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

void	quicksort(int nbs[10], int first, int last)
{
	int	i;
	int	j;
	int	pivot;

	if (first < last)
	{
		pivot = first;
		i = first;
		j = last;
		while (i < j)
		{
			while (nbs[i] <= nbs[pivot] && i < last)
				i++;
			while (nbs[j] > nbs[pivot])
				j--;
			if (i < j)
				ft_swap(&nbs[i], &nbs[j]);
		}
		ft_swap(&nbs[pivot], &nbs[j]);
		quicksort(nbs, first, j - 1);
		quicksort(nbs, j + 1, last);
	}
}

int	main(void)
{
	int	i;
	int	nb[10] = {8, 9, 1, -433, 5, 2, -23, 7, 6, 0};

	i = 0;
	while (i < 10)
	{
		printf("   Arr[%d]: %d\n", i, nb[i]);
		++i;
	}

	quicksort(nb, 0, i - 1);
	printf("\n");

	i = 0;
	while (i < 10)
	{
		printf("   Arr[%d]: %d\n", i, nb[i]);
		++i;
	}
	return (0);
}
