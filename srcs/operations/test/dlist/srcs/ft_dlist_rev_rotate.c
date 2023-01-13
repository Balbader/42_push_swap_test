#include "../includes/ft_dlist.h"

void	ft_dlist_rev_rotate(t_dlist **dlist)
{
	t_dlist	*last;

	if (!dlist || !*dlist)
		return ;
	last = ft_dlist_pop_back(dlist);
	ft_dlist_add_front(dlist, last->data);
	free(last);
}
