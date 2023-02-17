/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 08:44:24 by baalbade          #+#    #+#             */
/*   Updated: 2023/02/17 08:44:41 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap_stack(t_list *stack)
{
	t_list	*tmp;

	if (stack == NULL || stack->next == NULL)
		return ;
	tmp = (t_list *)malloc(sizeof(t_list));
	if (!tmp)
		return ;
	tmp->data = stack->data;
	stack->data = stack->next->data;
	stack->next->data = tmp->data;
	tmp->index = stack->index;
	stack->index = stack->next->index;
	stack->next->index = tmp->index;
}
