/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:43:17 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/16 15:43:22 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <limits.h>
# include <stdio.h>

typedef struct s_dlist
{
	int				data;
	struct s_dlist	*next;
	struct s_dlist	*prev;
}				t_dlist;

// **************** check errors *****************
int			ft_check_entry(char *str);
int			ft_convert_entry(char *str);
t_dlist		*ft_store_entry(int data);

// ***************** dbl_list *******************
t_dlist		*ft_create_node(int data);
t_dlist		*ft_find_node(t_dlist *dlist, int data);
t_dlist		*ft_init_stack_a(int *arr, int arr_size);
void		ft_insert_node(t_dlist *dlist, int data, t_dlist *to_find);

#endif
