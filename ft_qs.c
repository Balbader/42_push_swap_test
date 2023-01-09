/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_qs.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 13:11:17 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/09 13:11:22 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	ft_partition(int *arr, int lo, int hi)
{
	int	pivot;
	int	idx;
	int	i;

	pivot = arr[hi];
	idx = lo - 1;
	i = lo;
	while (i < hi)
	{
		if (arr[i] <= pivot)
		{
			idx++;
			ft_swap(&arr[i], &arr[idx]);
		}
		++i;
	}
	idx++;
	arr[hi] = arr[idx];
	arr[idx] = pivot;
	return (idx);
}

void	ft_quicksort(int *arr, int lo, int hi)
{
	int	pivot_idx;

	if (lo >= hi)
		return ;
	pivot_idx = ft_partition(arr, lo, hi);
	ft_quicksort(arr, lo, pivot_idx - 1);
	ft_quicksort(arr, pivot_idx + 1, hi);
}
