#include "../includes/ft_dlist.h"

void	ft_dlist_add_back(t_dlist **dlist, int data)
{
	t_dlist	*res;

	if (!dlist)
		return ;
	if (*dlist && (*dlist)->next)
	{
		ft_dlist_add_back(&(*dlist)->next, data);
		return ;
	}
	res = ft_dlist_create(data);
	if (!res)
		return ;
	if (!(*dlist))
		*dlist = res;
	else
	{
		(*dlist)->next = res;
		res->prev = *dlist;
	}
}
