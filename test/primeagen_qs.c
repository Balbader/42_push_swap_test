#include <stdio.h>

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
	int	temp;
	int	idx;

	pivot = arr[hi];
	idx = lo - 1;
	temp = 0;
	for (int i = lo; i < hi; ++i)
	{
		if (arr[hi] <= pivot)
		{
			idx++;
			ft_swap(&arr[i], &arr[idx]);
		}
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

	ft_quicksort(nb, 0, arr_length);
	printf("\n");

	i = 0;
	while (i < 10)
	{
		printf("   Arr[%d]: %d\n", i, nb[i]);
		++i;
	}
	return (0);
}
