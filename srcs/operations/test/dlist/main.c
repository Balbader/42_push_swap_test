#include "includes/ft_dlist.h"

int	main(void)
{
	t_dlist	*stack_a;
	int		*arr;
	int		arr_size;

	arr_size = 10;
	arr = (int *)malloc(sizeof(int) * arr_size);
	if (!arr)
		return (0);
	arr = ft_init_arr(arr, 10);
	stack_a = ft_init_stack(arr, arr_size);
	ft_dlist_print(stack_a);
	return (0);
}
