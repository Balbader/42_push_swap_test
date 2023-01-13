#include "../includes/ft_dlist.h"

t_dlist	*ft_dlist_pop(t_dlist **dlist)
{
	t_dlist	*res;

	if (!dlist || !(*dlist))
		return (NULL);
	res = *dlist;
	*dlist = (*dlist)->next;
	if (*dlist)
		(*dlist)->prev = NULL;
	res->next = NULL;
	return (res);
}
