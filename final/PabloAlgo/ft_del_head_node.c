/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_del_head_node.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 17:56:37 by baalbade          #+#    #+#             */
/*   Updated: 2023/02/08 17:56:39 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"

t_list	*ft_del_head_node(t_list *stack)
{
	t_list	*tmp;

	if (!stack)
		return ;
	tmp = stack;
	stack = stack->next;
	free (tmp);
	return (stack);
}

// void	ft_free_stack(t_list **stack)
// {
// 	t_list	*temp;

// 	if (!stack || !(*stack))
// 		return ;
// 	while (*stack)
// 	{
// 		temp = (*stack)->next;
// 		free(*stack);
// 		*stack = temp;
// 	}
// 	*stack = NULL;
// }
