/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 05:18:49 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/26 05:18:52 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <stdarg.h>

# include "../libft/include/libft.h"

typedef struct s_dblist
{
	int				data;
	struct s_dblist	*next;
	struct s_dblist	*prev;
}				t_dblist;

int		ft_check_entry(char *str);
int		ft_check_int_size(long data);
int		ft_convert_entry(char *str);
int		ft_get_entry(char **av, int elem, int i);
int		ft_look_for_doubles(int *arr, int arr_size);
int		*ft_process_entry(int ac, char **av);
int		*ft_store_entry(int data, int *entries, int pos);

#endif
