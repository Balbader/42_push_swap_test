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

# define INT_MAX 2147483647
# define INT_MIN -2147483648

typedef struct s_dblist
{
	int				data;
	struct s_dblist	*next;
	struct s_dblist	*prev;
}				t_dblist;

/* Entry Check */

int			ft_check_entry(char *str);
int			ft_check_int_size(long data);
int			ft_convert_entry(const char *str);
int			ft_get_entry(char **av, int elem, int i);
int			ft_look_for_doubles(int *arr, int arr_size);
int			*ft_process_entry(int ac, char **av);
int			*ft_store_entry(int data, int *entries, int pos);

/* ft_printf */
void		ft_print_char(char c, int *tot_len);
void		ft_print_hexa(unsigned int nb, char c, int *tot_len);
void		ft_print_nb(int nb, int *tot_len);
void		ft_print_ptr(size_t ptr, int *tot_len);
void		ft_print_str(char *str, int *tot_len);
void		ft_print_unsigned(unsigned int u, int *tot_len);
int			ft_printf(const char *str, ...);

/* Utils */

void		*ft_calloc(size_t nmemb, size_t size);
void		ft_putstr_fd(char *str, int fd);
void		ft_free_stack(t_dblist *stack);
void		ft_print_err(t_dblist *stack_a, t_dblist *stack_b);
int			ft_isdigit(char c);
int			ft_strlen(const char *str);

#endif
