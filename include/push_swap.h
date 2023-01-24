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

# include "../libft/include/libft.h"

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <limits.h>
# include <stdio.h>

typedef struct s_dblist
{
	int				data;
	struct s_dblist	*next;
	struct s_dblist	*prev;
}				t_dblist;

// **************** check errors *****************
int			ft_check_entry(char *str);
int			ft_convert_entry(char *str);
// int			*ft_store_entry(int ac, char *av[]);

// ***************** dbl_list *******************
t_dblist	*ft_create_node(int data);
t_dblist	*ft_find_node(t_dblist *dlist, int data);
t_dblist	*ft_init_stack_a(int *arr, int arr_size);
void		ft_insert_node(t_dblist *dlist, int data, t_dblist *to_find);

#endif
