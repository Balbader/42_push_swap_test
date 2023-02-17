/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_stack_size.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 11:02:05 by baalbade          #+#    #+#             */
/*   Updated: 2023/02/02 11:02:06 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_get_stack_size(t_list *stack)
{
	int	size;

	size = 0;
	while (stack != NULL)
	{
		++size;
		stack = stack->next;
	}
	return (size);
}
