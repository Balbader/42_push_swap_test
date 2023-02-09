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

#include "push_swap.h"

static t_list	*ft_swap_head(t_list *stack, t_list *temp)
{
	while (stack->next)
		stack = stack->next;
	temp->data = stack->data;
	temp->index = stack->index;
	temp->next = NULL;
	return (temp);
}

static void	ft_reverse_rotate_last(t_list **stack)
{
	while ((*stack))
	{
		if ((*stack)->next->next == NULL)
			break ;
		*stack = (*stack)->next;
	}
	free((*stack)->next);
	(*stack)->next = NULL;
}

void	ft_reverse_rotate_stack(t_list **stack)
{
	t_list	*head;
	t_list	*temp;

	head = NULL;
	temp = NULL;
	if (*stack)
	{
		temp = (t_list *)malloc(sizeof(t_list));
		if (!temp)
			return ;
		temp = ft_swap_head(*stack, temp);
		head = *stack;
		ft_reverse_rotate_last(stack);
		*stack = head;
		ft_add_front(stack, temp);
	}
}
