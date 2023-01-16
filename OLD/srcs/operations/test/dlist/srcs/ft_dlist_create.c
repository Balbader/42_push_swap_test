#include "../includes/ft_dlist.h"

t_dlist	*ft_dlist_create(int data)
{
	t_dlist	*res;

	res = (t_dlist *)calloc(1, sizeof(t_dlist));
	if (!res)
		return (NULL);
	res->next = NULL;
	res->prev = NULL;
	res->data = data;
	return (res);
}
