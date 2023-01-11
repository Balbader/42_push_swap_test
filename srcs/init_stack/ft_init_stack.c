/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:11:28 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/10 18:11:31 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The first argument should be at the top of the
	stack (be careful about the order).
*/

// #include "push_swap.h"
#include <stdlib.h>
#include "ft_convert_entry.c"

typedef struct s_dlist
{
	void			*data;
	struct s_dlist	*prev;
	struct s_dlist	*next;
}				t_dlist;

t_dlist	*ft_dlist_create(void *data)
{
	t_dlist	*new;

	new = (t_dlist *)calloc(1, sizeof(t_dlist));
	if (!new)
		return (NULL);
	new->data = data;
	new->prev = NULL;
	new->next = NULL;
	return (new);
}

static int	ft_arr_size(int *arr)
{
	int	i;

	i = 0;
	while (arr[i])
		++i;
	return (i);
}

t_dlist	*ft_init_stack(int *arr)
{
	t_dlist	*stack_a;
	t_dlist	*head_a;
	int		arr_size;
	int		*ptr;
	int		i;

	ptr = malloc(sizeof(int));
	if (!ptr)
		return (NULL);
	arr_size = ft_arr_size(arr);
	i = 0;
	ptr = &i;
	ft_dlist_create(ptr);
	++i;
	while (i < arr_size)
	{
		ptr = &i;
		++i;
	}
	return (head_a);
}
