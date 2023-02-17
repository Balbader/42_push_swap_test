/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 08:23:55 by baalbade          #+#    #+#             */
/*   Updated: 2023/02/17 08:23:56 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include <time.h>

typedef struct s_list
{
	int				data;
	int				index;
	struct s_list	*next;
}				t_list;

/* ACTIONS */
void		ft_push_node(t_list **src, t_list **dest);
void		ft_rotate_stack(t_list **stack);
void		ft_reverse_rotate_stack(t_list **stack);
void		ft_swap_stack(t_list *stack);

/* OPERATIONS */
void		ft_pa(t_list **stack_b, t_list **stack_a);
void		ft_pb(t_list **stack_a, t_list **stack_b);
void		ft_ra(t_list *stack_a);
void		ft_rb(t_list **stack_b);
void		ft_rr(t_list **stack_a, t_list **stack_b);
void		ft_rra(t_list **stack_a);
void		ft_rrb(t_list **stack_b);
void		ft_rrr(t_list **stack_a, t_list **stack_b);
void		ft_sa(t_list *stack_a);
void		ft_sb(t_list *stack_b);
void		ft_ss(t_list *stack_a, t_list *stack_b);

/* ENTRY */
int			ft_check_entry(char *av);
int			ft_get_entry(char *av, long int elem);
void		ft_look_for_doubles(int *arr, int arr_size);
long int	ft_convert_entry(const char *av);

/* UTILS */
int			ft_isdigit(char c);
void		ft_print_err(t_list **stack_a, t_list **stack_b);
void		ft_print_stack(t_list **stack, char *name);
void		ft_putstr_fd(char *str, int fd);
int			ft_strlen(const char *str);

#endif
