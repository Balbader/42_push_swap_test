/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 17:06:28 by baalbade          #+#    #+#             */
/*   Updated: 2022/12/04 17:46:15 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;
	size_t	j;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	i = 0;
	j = 0;
	if (!size)
		return (src_len);
	if (size < dst_len)
		return (src_len + size);
	while (src[i] && dst_len + i < size - 1)
		dst[dst_len + j++] = src[i++];
	if (dst_len + j < size)
		dst[dst_len + j] = '\0';
	return (src_len + dst_len);
}
