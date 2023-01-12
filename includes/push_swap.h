/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:06:04 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/04 13:06:07 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/includes/libft.h"
# include "../srcs/dbl_list/ft_dlist.h"

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

// **************** quicksort ********************
static int	ft_partition(int *arr, int lo, int hi);
static void	ft_swap(int *a, int *b);
void		ft_qs(int *arr, int lo, int hi);

// **************** init stack *******************
// ft_convert_entry.c
int			*ft_convert_entry(char *str);
// ft_init_stack
static int	ft_arr_size(int *arr);
t_dlist		*ft_init_stack(int *arr);

// **************** check errors *****************
// ft_check_main_arg.c
static int	ft_is_minus(int c);
static int	ft_check_str(char *str);
void		ft_check_main_arg(int ac, char **av);
// ft_check_errors.c
static void	ft_check_duplicates(int *arr);
void		ft_check_errors(int *arr);

// ***************** dbl_list *******************
t_dlist		*ft_create_node(int data);
t_dlist		*ft_find_node(t_dlist *dlist, int data);
t_dlist		*ft_init_stack_a(int *arr, int arr_size);
void		ft_insert_node(t_dlist *stack_a, int data, t_dlist *to_find);

// **************** operations ******************
void		ft_swap_a(t_dlist *list);
void		ft_swap_b(t_dlist *list);
void		ft_ss(t_dlist *list);
void		ft_push_a(t_dlist *list);
void		ft_push_b(t_dlist *list);
void		ft_rotate_a(t_dlist *list);
void		ft_rotate_b(t_dlist *list);
void		ft_rr(t_dlist *list);
void		ft_reverse_rotate_a(t_dlist *list);
void		ft_reverse_rotate_b(t_dlist *list);
void		ft_rrr(t_dlist *list);

#endif
