#include "../includes/ft_dlist.h"

void	ft_dlist_swap(t_dlist **dlist)
{
	t_dlist	*first;
	t_dlist	*second;

	if (!dlist)
		return ;
	if (!*dlist || !(*dlist)->next)
		return ;
	first = ft_dlist_pop(dlist);
	second = ft_dlist_pop(dlist);
	ft_dlist_add_front(dlist, first->data);
	free(first);
	ft_dlist_add_front(dlist, second->data);
	free(second);
}
