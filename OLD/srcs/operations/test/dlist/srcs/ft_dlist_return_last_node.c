#include "../includes/ft_dlist.h"

t_dlist	*ft_dlist_retrun_last_node(t_dlist *dlist)
{
	t_dlist	*last_node;

	if (!dlist)
		return (NULL);
	last_node = dlist;
	while (last_node->next != NULL)
	{
		last_node = last_node->next;
		if (last_node->next == NULL)
			return (last_node);
	}
	return (NULL);
}
