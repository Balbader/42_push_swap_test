/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_case_5.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:09:30 by baalbade          #+#    #+#             */
/*   Updated: 2023/02/01 16:09:32 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// static int	 *ft_new_arr(int entries[5], int new_arr[3])
// {
// 	new_arr[0] = entries[2];
// 	new_arr[1] = entries[3];
// 	new_arr[2] = entries[4];
// 	return (new_arr);
// }

t_list		*ft_sort_case_5(int entries[5], t_list *stack_a, t_list *stack_b)
{
	t_list	*before;
	t_list	*before_case_3;
	t_list	*after_case_3;
	t_list	*after_pa;
	t_list	*after_ra;
	t_list	*after_pa_2;
	int		new_arr[3];

	before = stack_a;
	printf("Before Sorting:\n");
	while (before != NULL) {
		printf("stack_a[%d]: %d\n", before->index, before->data);
		before = before->next;
	}
	printf("\n");

	ft_pb(&stack_a, &stack_b);
	ft_pb(&stack_a, &stack_b);

	printf("\n");

	new_arr[0] = entries[2];
	new_arr[1] = entries[3];
	new_arr[2] = entries[4];

	before_case_3 = stack_a;
	printf("Before ft_sort_case_3:\n");
	while (before_case_3 != NULL) {
		printf("stack_a[%d]: %d\n", before_case_3->index, before_case_3->data);
		before_case_3 = before_case_3->next;
	}

	printf("\n");
	stack_a = ft_sort_case_3(new_arr, stack_a);
	after_case_3 = stack_a;
	printf("After ft_sort_case_3:\n");
	while (after_case_3 != NULL) {
		printf("stack_a[%d]: %d\n", after_case_3->index, after_case_3->data);
		after_case_3 = after_case_3->next;
	}

	printf("\n");

	ft_pa(&stack_a, &stack_b);
	after_pa = stack_a;
	printf("After pa:\n");
	while (after_pa != NULL) {
		printf("stack_a[%d]: %d\n", after_pa->index, after_pa->data);
		after_pa = after_pa->next;
	}

	printf("\n");

	ft_ra(&stack_a);
	after_ra = stack_a;
	printf("After ra:\n");
	while (after_ra != NULL) {
		printf("stack_a[%d]: %d\n", after_ra->index, after_ra->data);
		after_ra = after_ra->next;
	}

	printf("\n");

	ft_pa(&stack_a, &stack_b);
	after_pa_2 = stack_a;
	printf("After pa_2:\n");
	while (after_pa_2 != NULL) {
		printf("stack_a[%d]: %d\n", after_pa_2->index, after_pa_2->data);
		after_pa_2 = after_pa_2->next;
	}

	return (stack_a);
}
