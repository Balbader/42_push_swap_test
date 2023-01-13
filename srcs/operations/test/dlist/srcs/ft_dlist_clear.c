#include "../includes/ft_dlist.h"

void	ft_dlist_clear(t_dlist *dlist, int (*f)(int))
{
	if (!dlist)
		return ;
	ft_dlist_clear(dlist->next, f);
	if (f && dlist->data)
		f(dlist->data);
	free(dlist);
}
