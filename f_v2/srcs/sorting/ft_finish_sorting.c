/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_finish_sorting.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 13:01:18 by baalbade          #+#    #+#             */
/*   Updated: 2023/02/17 13:01:38 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_finish_sorting(t_list **stack_a, t_list **stack_b)
{
	ft_pa(stack_a, stack_b);
	*stack_a = ft_re_init_index(*stack_a);
	ft_pa(stack_a, stack_b);
	*stack_a = ft_re_init_index(*stack_a);
}
