#include "../includes/ft_dlist.h"

t_dlist	*ft_dlist_insert_node(t_dlist *dlist, int pos, int new_data)
{
	t_dlist	*node_to_insert;
	t_dlist	*new_dlist;

	if (!dlist)
		return (NULL);
	new_dlist = dlist;
	while (dlist->data != pos)
		dlist = dlist->next;
	node_to_insert = ft_dlist_create(new_data);
	node_to_insert->next = dlist->next;
	dlist->next = node_to_insert;
	node_to_insert->prev = dlist;
	if (node_to_insert->next != NULL)
		node_to_insert->next->prev = node_to_insert;
	return (new_dlist);
}
