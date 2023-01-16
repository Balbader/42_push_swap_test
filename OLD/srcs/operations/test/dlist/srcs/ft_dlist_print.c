#include "../includes/ft_dlist.h"

void	ft_dlist_print(t_dlist *dlist)
{
	int	i;

	if (!dlist)
		return ;
	i = 1;
	while (dlist != NULL)
	{
		printf("node[%d]->data: %d\n", i, dlist->data);
		dlist = dlist->next;
		++i;
	}
}
