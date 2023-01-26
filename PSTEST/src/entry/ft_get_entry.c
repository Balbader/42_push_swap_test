/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_entry.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 10:12:48 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/24 10:12:50 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * 1. Take in entry
 * 2. Check entry: ft_check_entry.c
 * 3. Convert entry: ft_convert_entry.c
 * 4. Store entry in int arr
 * 5. Look for doubles: ft_look_for_doubles.c
 * 6. Check size of array elem: ft_check_int_size.c
 * 7. If no error found ==> return the array for init stack a
*/

// #include "push_swap.h"
#include <stdio.h>

int	*ft_get_entry(char ac, char *av[])
{
		int		tot_entries;
		int		i;

		i = 1;
		tot_entries = ac - 1;
		while (i < tot_entries)
		{
			printf("%s\n", av[i]);
			++i;
		}
	return (0);
}
