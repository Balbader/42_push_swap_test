/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 07:04:35 by baalbade          #+#    #+#             */
/*   Updated: 2022/12/05 07:35:45 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	size_t	i;
	size_t	j;

	if (!src || !dst)
		return (NULL);
	j = 0;
	i = 0;
	while (src[i])
		dst[j++] = src[i++];
	dst[j] = '\0';
	return (dst);
}
