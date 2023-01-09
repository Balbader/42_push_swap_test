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

void	quicksort(int nbs[10], int first, int last)
{
	int	i;
	int	j;
	int	pivot;
	int	temp;

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
			{
				temp = nbs[i];
				nbs[i] = nbs[j];
				nbs[j] = temp;
			}
		}
		temp = nbs[pivot];
		nbs[pivot] = nbs[j];
		nbs[j] = temp;
		quicksort(nbs, first, j - 1);
		quicksort(nbs, j + 1, last);
	}
}

int	main(void)
{
	int	i;
	int	nb[10] = {8, 9, 1, 3, 5, 2, 4, 7, 6, 0};

	i = 0;
	while (i < 10)
	{
		printf("%d\n", nb[i]);
		++i;
	}

	quicksort(nb, 0, i - 1);
	printf("\n");

	i = 0;
	while (i < 10)
	{
		printf("%d\n", nb[i]);
		++i;
	}
	return (0);
}
