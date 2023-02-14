/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 16:32:25 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/30 16:32:26 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"

void	ft_swap_stack(t_list *stack)
{
	t_list	*tmp;

	if (stack == NULL || stack->next == NULL)
		return ;
	tmp = (t_list *)malloc(sizeof(t_list));
	if (!tmp)
		return ;
	tmp->data = stack->data;
	tmp->index = stack->index;
	stack->data = stack->next->data;
	stack->index = stack->next->index;
	stack->next->data = tmp->data;
	stack->next->index = tmp->index;
}
