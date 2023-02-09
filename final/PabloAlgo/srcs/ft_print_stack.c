/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 15:30:44 by baalbade          #+#    #+#             */
/*   Updated: 2023/02/09 15:30:46 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"

void	ft_print_stack(t_list **stack, char *name)
{
	t_list	*temp;

	temp = *stack;
	while (temp != NULL)
	{
		printf("%s[%d]: %d\n", name, temp->index, temp->data);
		temp = temp->next;
	}
}
