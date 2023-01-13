#include "includes/ft_dlist.h"

int	main(void)
{
	t_dlist	*stack;
	t_dlist	*new;
	t_dlist	*new_stack;
	int		*arr;
	int		arr_size;

	arr_size = 10;
	arr = (int *)malloc(sizeof(int) * arr_size);
	if (!arr)
		return (0);
	
	// Test for function init stack
	arr = ft_init_arr(arr, 10);
	stack = ft_init_stack(arr, arr_size);
	printf("STACK :\n");
	ft_dlist_print(stack);

	printf("\n");
	
	// Test for function insert new node in stack
	new = ft_dlist_create(42);
	new_stack = ft_dlist_insert_node(stack, 5, 42);
	printf("NEW STACK :\n");
	ft_dlist_print(new_stack);
return (0);
}
