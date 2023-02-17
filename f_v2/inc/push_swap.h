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
# include <unistd.h>
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
void		ft_ra(t_list **stack_a);
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
int			ft_strlen(const char *str);
void		ft_print_err(t_list **stack_a, t_list **stack_b);
void		ft_print_stack(t_list **stack, char *name);
void		ft_putstr_fd(char *str, int fd);

/* STACK */
int			ft_find_biggest_node_pos(t_list *stack);
int			ft_find_smallest_node_pos(t_list *stack);
int			ft_get_stack_size(t_list *stack);
int			ft_stack_is_sorted(t_list *stack);

void		ft_add_new_head(t_list **lst, t_list *node);
void		ft_add_new_tail(t_list **lst, t_list *node);
void		ft_def_stack_case(t_list *stack_a, t_list *stack_b);
void		ft_free_stack(t_list **stack);
void		ft_split_stack(t_list *stack_a, t_list *stack_b);

t_list		*ft_create_node(int data, int index);
t_list		*ft_find_middle_node(t_list *stack);
t_list		*ft_get_before_last_node(t_list *stack);
t_list		*ft_get_last_node(t_list *stack);
t_list		*ft_init_rand_stack(int *rand_arr, int start, int end);
t_list		*ft_init_stack_a(t_list *stack_a, int *entries, int ac);
t_list		*ft_is_biggest_node(t_list **stack);
t_list		*ft_re_init_index(t_list *stack);

/* SORTING */
t_list		*ft_pre_sort_stack(t_list *rand_stack);

int			*ft_init_arr_3(t_list *stack, int *arr);

void		ft_sort_3(t_list *stack, int arr[3]);
void		ft_sort_4(t_list *stack_a, t_list *stack_b);
void		ft_push_smallest_node_5(t_list **stack_a,
				t_list **stack_b, int smallest_node_index);
void		ft_push_smallest_node_4(t_list **stack_a,
				t_list **stack_b, int smallest_node_index);
void		ft_start_sorting(t_list **stack_a,
				t_list **stack_b, int stack_size);
void		ft_finish_sorting(t_list **stack_a, t_list **stack_b);


#endif
