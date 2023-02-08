/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate_stack.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 17:15:20 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/30 17:15:23 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"

void	ft_reverse_rotate_stack(t_list *stack)
{
	t_list	*temp;
	t_list	*last_node;
	t_list	*before_last_node;

	last_node = ft_get_last_node(stack);
	before_last_node = ft_get_before_last_node(stack);
	temp = stack;
	stack = last_node;
	stack->next = temp;
	before_last_node->next = NULL;
}
