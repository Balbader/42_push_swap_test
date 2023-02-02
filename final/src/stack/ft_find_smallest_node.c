
#include "push_swap.h"

int	ft_find_smallest_node_pos(t_list *stack)
{
	int		data;
	int		index;

	data = stack->data;
	while (stack)
	{
		if (stack->data < data)
		{
			data = stack->data;
			index = stack->index;
		}
		stack = stack->next;
	}
	return (index);
}
