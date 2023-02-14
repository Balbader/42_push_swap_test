/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 16:47:23 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/30 16:47:25 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate_stack(t_list **stack)
{
	t_list	*temp;
	t_list	*last_node;

	temp = *stack;
	*stack = (*stack)->next;
	last_node = ft_get_last_node(*stack);
	temp->next = NULL;
	last_node->next = temp;
}
