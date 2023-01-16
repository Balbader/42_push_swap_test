#ifndef FT_DLIST_H
# define FT_DLIST_H

#include <stdlib.h>
# include <stdio.h>

typedef struct s_dlist
{
	int				data;
	struct s_dlist	*prev;
	struct s_dlist	*next;
}				t_dlist;

void	ft_dlist_add_back(t_dlist **dlist, int data);
void	ft_dlist_add_front(t_dlist **dlist, int data);
void	ft_dlist_clear(t_dlist *dlist, int (*f)(int));
void	ft_dlist_foreach(t_dlist *dlist, int (*f)(t_dlist *));
void	ft_dlist_push(t_dlist **pushed, t_dlist **popped);
void	ft_dlist_rotate(t_dlist **dlist);
void	ft_dlist_rev_rotate(t_dlist **dlist);
void	ft_dlist_swap(t_dlist **dlist);
void	ft_dlist_print(t_dlist *dlist);
void	ft_dlist_print_reverse(t_dlist *dlist);

t_dlist	*ft_dlist_create(int data);
t_dlist	*ft_dlist_find(t_dlist *dlist, int data, int (*f)(int, int));
t_dlist	*ft_dlist_find_node(t_dlist *dlist, int data);
t_dlist	*ft_dlist_pop(t_dlist **dlist);
t_dlist	*ft_dlist_pop_back(t_dlist **dlist);
t_dlist	*ft_dlist_insert_node(t_dlist *dlist, int pos, int new_data);
t_dlist	*ft_dlist_return_last_node(t_dlist *dlist);

int		ft_dlist_is_asc_sorted(t_dlist *dlist, int (*f)(int, int));

int		*ft_init_arr(int *arr, int arr_size);
t_dlist	*ft_init_stack(int *arr, int arr_size);

#endif
