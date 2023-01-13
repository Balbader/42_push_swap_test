#include "../includes/ft_dlist.h"

t_dlist	*ft_dlist_find_node(t_dlist *dlist, int data)
{
	t_dlist	*to_find;

	if (!dlist)
		return (NULL);
	to_find = dlist;
	while (to_find != NULL)
	{
		if (to_find->data == data)
			return (to_find);
		to_find = to_find->next;
	}
	return (NULL);
}
