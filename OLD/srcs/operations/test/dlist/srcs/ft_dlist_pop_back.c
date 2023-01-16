#include "../includes/ft_dlist.h"

t_dlist	*ft_dlist_pop_back(t_dlist **dlist)
{
	t_dlist	*res;

	if (!dlist || !(*dlist))
		return (NULL);
	if ((*dlist)->next)
		return (ft_dlist_pop_back(&(*dlist)->next));
	res = *dlist;
	*dlist = (*dlist)->prev;
	if (*dlist)
		(*dlist)->next = NULL;
	res->prev = NULL;
	return (res);
}
