/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:26:09 by baalbade          #+#    #+#             */
/*   Updated: 2022/11/09 16:26:11 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*haystack;
	size_t	i;

	haystack = (char *)s;
	i = 0;
	while (i < n)
	{
		if (((unsigned char *)haystack)[i] == (unsigned char)c)
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
