/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 15:13:17 by baalbade          #+#    #+#             */
/*   Updated: 2023/02/04 15:13:19 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORT_H
# define SORT_H

# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include <time.h>

typedef struct s_list
{
	int				data;
	int				index;
	struct s_list	*next;
}				t_list;

t_list	*ft_create_node(int data, int index);
t_list	*ft_init_rand_stack(int *rand_arr, int start, int end);
t_list	*ft_pre_sort_stack(t_list *rand_stack);

#endif // !SORT_H
