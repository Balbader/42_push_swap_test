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

# include "printf.h"

typedef struct s_list
{
	int				value;
	struct s_list	*next;
	struct s_list	*prev;
}				t_list;

int		ft_partition(int *arr, int lo, int hi);
void	ft_swap(int *a, int *b);
void	ft_qs(int *arr, int lo, int hi);

#endif
