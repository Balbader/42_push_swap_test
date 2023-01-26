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

typedef struct s_dblist
{
	int				data;
	struct s_dblist	*next;
	struct s_dblist	*prev;
}				t_dblist;

// ft_printf
int		ft_printf(const char *str, ...);
void	ft_print_nb(int nb, int *tot_len);
void	ft_print_hexa(unsigned int nb, char c, int *tot_len);
void	ft_print_unsigned(unsigned int u, int *tot_len);
void	ft_print_ptr(size_t ptr, int *tot_len);
void	ft_print_char(char c, int *tot_len);
void	ft_print_str(char *str, int *tot_len);

#endif
