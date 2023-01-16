#include "../includes/ft_dlist.h"

t_dlist	*ft_init_stack(int *arr, int arr_size)
{
	t_dlist	*new_stack;
	t_dlist	*current;
	int		i;

	i = 0;
	current = ft_dlist_create(arr[i]);
	new_stack = current;
	++i;
	while (i < arr_size)
	{
		current->next = ft_dlist_create(arr[i]);
		current->next->prev = new_stack;
		current = current->next;
		++i;
	}
	return (new_stack);
}
