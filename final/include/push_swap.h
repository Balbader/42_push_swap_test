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

typedef struct s_list
{
	int				data;
	struct s_list	*next;
}				t_list;

/* Entry Check */
int		ft_check_entry(char *str);
int		ft_check_int_size(long data);
int		ft_convert_entry(const char *str);
int		ft_get_entry(char **av, int elem, int i);
int		ft_look_for_doubles(int *arr, int arr_size);
int		*ft_process_entry(int ac, char **av);
int		*ft_store_entry(int data, int *entries, int pos);

/* ft_printf */
void	ft_print_char(char c, int *tot_len);
void	ft_print_hexa(unsigned int nb, char c, int *tot_len);
void	ft_print_nb(int nb, int *tot_len);
void	ft_print_ptr(size_t ptr, int *tot_len);
void	ft_print_str(char *str, int *tot_len);
void	ft_print_unsigned(unsigned int u, int *tot_len);
int		ft_printf(const char *str, ...);

/* d_list */
void	ft_swap_stack(t_list *stack);
t_list	*ft_get_last_node(t_list *stack);

/* Utils */
void	*ft_calloc(size_t nmemb, size_t size);
void	ft_putstr_fd(char *str, int fd);
void	ft_free_stack(t_list *stack);
void	ft_print_err(t_list *stack_a, t_list *stack_b);
int		ft_isdigit(char c);
int		ft_strlen(const char *str);

/* Operations */
void	ft_ra(t_list **stack_a);
void	ft_rb(t_list **stack_b);
void	ft_rr(t_list **stack_a, t_list **stack_b);
void	ft_sa(t_list **stack_a);
void	ft_sb(t_list **stack_b);
void	ft_ss(t_list **stack_a, t_list **stack_b);

#endif
