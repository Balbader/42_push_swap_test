#include "../includes/ft_dlist.h"

void	ft_dlist_rotate(t_dlist **dlist)
{
	t_dlist	*first;

	if (!dlist || !(*dlist))
		return ;
	first = ft_dlist_pop(dlist);
	ft_dlist_add_back(dlist, first->data);
	free(first);
}
