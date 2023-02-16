/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 21:38:13 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/25 21:38:15 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/include/libft.h"

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct s_dblist
{
	int				data;
	struct s_dblist	*next;
	struct s_dblist	*prev;
}				t_dblist;

int		ft_get_entry(char **av, int elem, int i);
int		ft_check_entry(char *str);
int		ft_convert_entry(char *str);
int		*ft_store_entry(int data, int *entries, int pos);
int		ft_check_int_size(long data);
int		ft_look_for_doubles(int *data_arr, int data_arr_size);

#endif
