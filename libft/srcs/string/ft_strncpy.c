/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 10:49:27 by baalbade          #+#    #+#             */
/*   Updated: 2022/12/05 11:10:06 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, char *src, size_t n)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	while (i < n && src[i])
		dest[j++] = src[i++];
	while (i < n)
		dest[i++] = '\0';
	i = 0;
	return (dest);
}
