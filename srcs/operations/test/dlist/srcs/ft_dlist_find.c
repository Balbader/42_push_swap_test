#include "../includes/ft_dlist.h"

t_dlist	*ft_dlist_find(t_dlist *dlist, int data, int (*f)(int, int))
{
	if (!dlist)
		return (NULL);
	if (dlist->data)
	{
		if (f(dlist->data, data) == 0)
			return (dlist);
	}
	return (ft_dlist_find(dlist->next, data, f));
}
