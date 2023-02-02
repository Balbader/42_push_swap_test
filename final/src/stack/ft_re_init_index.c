/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_re_init_index.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 10:26:42 by baalbade          #+#    #+#             */
/*   Updated: 2023/02/02 10:26:44 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_re_init_index(t_list *stack)
{
	int	i;
	t_list	*head;
	head = stack;
	i = 1;
	while (stack)
	{
		stack->index = i;
		stack = stack->next;
		++i;
	}
	return (head);
}
