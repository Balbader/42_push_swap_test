/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 08:43:32 by baalbade          #+#    #+#             */
/*   Updated: 2023/02/17 08:43:36 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate_stack(t_list *stack)
{
	t_list	*temp;
	t_list	*last_node;

	temp = stack;
	stack = stack->next;
	last_node = ft_get_last_node(stack);
	temp->next = NULL;
	last_node->next = temp;
}
