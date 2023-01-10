/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlist.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 09:55:11 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/10 09:55:14 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DLIST_H
# define FT_DLIST_H

typedef struct s_dlist
{
	void			*data;
	struct s_dlist	*prev;
	struct s_dlist	*next;
}				t_dlist;

void	ft_dlist_add_back(t_dlist **dlist, void *data);
void	ft_dlist_add_front(t_dlist **dlist, void *data);
void	ft_dlist_clear(t_dlist *dlist, void (*f)(void *));
void	ft_dlist_foreach(t_dlist *dlist, void (*f)(t_dlist *));
void	ft_dlist_push(t_dlist **pushed, t_dlist **popped);
void	ft_dlist_rotate(t_dlist **dlist);
void	ft_dlist_rev_rotate(t_dlist **dlist);
void	ft_dlist_swap(t_dlist **dlist);

t_dlist	*ft_dlist_create(void *data);
t_dlist	*ft_dlist_find(t_dlist *dlist, void *data, int (*f)(void *, void *));
t_dlist	*ft_dlist_pop(t_dlist **dlist);
t_dlist	*ft_dlist_pop_back(t_dlist **dlist);

int		ft_dlist_is_asc_sorted(t_dlist *dlist, int (*f)(void *, void *));

#endif
