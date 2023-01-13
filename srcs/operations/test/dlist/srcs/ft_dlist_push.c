#include "../includes/ft_dlist.h"

void	ft_dlist_push(t_dlist **pushed, t_dlist **popped)
{
	t_dlist	*node;

	node = ft_dlist_pop(popped);
	if (!node)
		return ;
	ft_dlist_add_front(pushed, node->data);
	free(node);
}
