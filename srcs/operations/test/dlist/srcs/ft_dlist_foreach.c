#include "../includes/ft_dlist.h"

void	ft_dlist_foreach(t_dlist *dlist, int (*f)(t_dlist *))
{
	if (!dlist)
		return ;
	f(dlist);
	ft_dlist_foreach(dlist->next, f);
}
