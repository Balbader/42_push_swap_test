/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:03:55 by baalbade          #+#    #+#             */
/*   Updated: 2022/11/09 17:03:57 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	size;

	size = 0;
	if (src < dest)
	{
		size = n;
		while (size > 0)
		{
			size--;
			((unsigned char *)dest)[size] = ((unsigned char *)src)[size];
		}
	}
	else
	{
		size = 0;
		while (size < n)
		{
			((unsigned char *)dest)[size] = ((unsigned char *)src)[size];
			size++;
		}
	}
	return (dest);
}
