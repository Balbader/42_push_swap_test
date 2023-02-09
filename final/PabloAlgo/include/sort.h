/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 14:33:54 by baalbade          #+#    #+#             */
/*   Updated: 2023/02/09 14:34:00 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORT_H
# define SORT_H

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

t_list	*ft_create_node(int data, int index);
t_list	*ft_find_middle_node(t_list *stack);
t_list	*ft_init_rand_stack(int *rand_arr, int start, int end);
t_list	*ft_pre_sort_stack(t_list *rand_stack);
t_list	*ft_get_last_node(t_list *stack);
t_list	*ft_get_before_last_node(t_list *stack);

void	ft_push_node(t_list **dest, t_list **node);
void	ft_swap_stack(t_list *stack);
void	ft_rotate_stack(t_list **stack);
void	ft_reverse_rotate_stack(t_list **stack);
void	ft_del_head_node(t_list *stack);
void	ft_add_front(t_list **lst, t_list *node);
void	ft_add_back(t_list **lst, t_list *node);

void	ft_pa(t_list **stack_b, t_list **stack_a);
void	ft_pb(t_list **stack_a, t_list **stack_b);
void	ft_ra(t_list *stack_a);
void	ft_rb(t_list **stack_b);
void	ft_rr(t_list **stack_a, t_list **stack_b);
void	ft_rra(t_list **stack_a);
void	ft_rrb(t_list **stack_b);
void	ft_rrr(t_list **stack_a, t_list **stack_b);
void	ft_sa(t_list *stack_a);
void	ft_sb(t_list *stack_b);
void	ft_ss(t_list *stack_a, t_list *stack_b);

int		*ft_init_arr_3(t_list *stack);

t_list	*ft_sort_case_3(int arr[3], t_list *stack_a);
t_list	*ft_sort_case_4(t_list *stack_a, t_list *stack_b);
t_list	*ft_sort_case_5(t_list *stack_a, t_list *stack_b);
t_list	*ft_sort_stack(t_list *stack_a, t_list *stack_b);

void	ft_print_stack(t_list **stack, char *name);
void	ft_push_big_nodes_5(t_list **stack_a,
						t_list **stack_b, int big_node_index);
void	ft_push_big_nodes_4(t_list **stack_a,
						t_list **stack_b, int big_node_index);
void	ft_start_sorting(t_list **stack_a,
					t_list **stack_b, int stack_size);
void	ft_finish_sorting(t_list **stack_a, t_list **stack_b);

#endif // !SORT_H
