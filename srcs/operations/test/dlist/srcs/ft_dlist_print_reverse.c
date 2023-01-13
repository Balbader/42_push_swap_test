#include "../includes/ft_dlist.h"

void	ft_dlist_print_reverse(t_dlist *dlist)
{
	t_dlist	*reverse_list;

	if (!dlist)
		return ;
	reverse_list = dlist;
	while (reverse_list->next != NULL)
		reverse_list = reverse_list->next;

}
