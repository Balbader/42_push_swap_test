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
# include <limits.h>
# include <stdint.h>
# include <stdio.h>

typedef struct s_list
{
	int				data;
	int				index;
	struct s_list	*next;
}				t_list;

/* Entry Check */
int			ft_check_entry(char *str);
int			ft_get_entry(char *av, long int elem);
void		ft_look_for_doubles(int *arr, int arr_size);
long int	ft_convert_entry(const char *av);

/* Sorting */
t_list		*ft_sort_case_3(int arr[3], t_list *stack_a);
t_list		*ft_sort_case_5(int entries[5], t_list *stack_a, t_list *stack_b);


/* Stack */
void		ft_push_node(t_list **dest, t_list **src);
void		ft_swap_stack(t_list *stack);
void		ft_rotate_stack(t_list **stack);
void		ft_reverse_rotate_stack(t_list **stack);
t_list		*ft_get_last_node(t_list *stack);
t_list		*ft_get_before_last_node(t_list *stack);
t_list		*ft_init_stack_a(t_list *stack_a, int *entries, int ac);

/* Utils */
void		*ft_calloc(size_t nmemb, size_t size);
void		ft_putstr_fd(char *str, int fd);
void		ft_free_stack(t_list **stack);
void		ft_print_err(t_list **stack_a, t_list **stack_b);
int			ft_isdigit(char c);
int			ft_strlen(const char *str);

/* Operations */
void		ft_pa(t_list **stack_b, t_list **stack_a);
void		ft_pb(t_list **stack_a, t_list **stack_b);
void		ft_ra(t_list **stack_a);
void		ft_rb(t_list **stack_b);
void		ft_rr(t_list **stack_a, t_list **stack_b);
void		ft_rra(t_list **stack_a);
void		ft_rrb(t_list **stack_b);
void		ft_rrr(t_list **stack_a, t_list **stack_b);
void		ft_sa(t_list **stack_a);
void		ft_sb(t_list **stack_b);
void		ft_ss(t_list **stack_a, t_list **stack_b);

#endif
