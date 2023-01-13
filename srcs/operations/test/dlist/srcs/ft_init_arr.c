#include "../includes/ft_dlist.h"

int	*ft_init_arr(int *arr, int arr_size)
{
	int	i;
	int	j;

	if (!arr)
		return (0);
	j = 1;
	i = 0;
	while (i < arr_size)
	{
		arr[i] = j;
		++i;
		++j;
	}
	return (arr);
}
