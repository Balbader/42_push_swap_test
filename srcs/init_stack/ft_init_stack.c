/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:11:28 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/10 18:11:31 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The first argument should be at the top of the
	stack (be careful about the order).
*/

#include "../../includes/push_swap.h"

static int	ft_arr_size(int *arr)
{
	int	i;

	i = 0;
	while (arr[i])
		++i;
	return (i);
}

t_dlist	*ft_init_stack(int *arr)
{
	t_dlist	*stack_a;
	t_dlist	*head_a;
	int		arr_size;
	int		i;

	return (head_a);
}
