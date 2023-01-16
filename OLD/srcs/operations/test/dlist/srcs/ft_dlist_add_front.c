#include "../includes/ft_dlist.h"

void	ft_dlist_add_front(t_dlist **dlist, int data)
{
	t_dlist	*res;

	if (!dlist)
		return ;
	res = ft_dlist_create(data);
	if (!res)
		return ;
	res->next = *dlist;
	if (*dlist)
		(*dlist)->prev = res;
	*dlist = res;
}
