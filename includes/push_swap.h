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

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

// quicksort
int		ft_partition(int *arr, int lo, int hi);
void	ft_swap(int *a, int *b);
void	ft_qs(int *arr, int lo, int hi);

// operations
void	ft_swap_a(t_dlist *list);
void	ft_swap_b(t_dlist *list);
void	ft_ss(t_dlist *list);
void	ft_push_a(t_dlist *list);
void	ft_push_b(t_dlist *list);
void	ft_rotate_a(t_dlist *list);
void	ft_rotate_b(t_dlist *list);
void	ft_rr(t_dlist *list);
void	ft_reverse_rotate_a(t_dlist *list);
void	ft_reverse_rotate_b(t_dlist *list);
void	ft_rrr(t_dlist *list);

#endif
