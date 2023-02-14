/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_before_last_node.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 17:16:34 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/30 17:16:36 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"

t_list	*ft_get_before_last_node(t_list *stack)
{
	while (stack && stack->next->next != NULL)
		stack = stack->next;
	return (stack);
}
