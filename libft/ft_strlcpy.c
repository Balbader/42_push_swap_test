/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:28:33 by baalbade          #+#    #+#             */
/*   Updated: 2022/11/08 11:31:51 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	while (i < n - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (i < n)
		dst[i] = '\0';
	return (ft_strlen(src));
}
