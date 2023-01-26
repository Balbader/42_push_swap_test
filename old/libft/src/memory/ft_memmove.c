/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 11:16:31 by baalbade          #+#    #+#             */
/*   Updated: 2022/12/07 11:26:10 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char			*tmp;
	unsigned int	i;
	unsigned int	j;

	tmp = (char *)malloc((sizeof(char) * n));
	if (!tmp)
		return (NULL);
	j = 0;
	i = 0;
	while (i < n)
		tmp[j++] = ((char *)src)[i++];
	j = 0;
	i = 0;
	while (i < n)
		((char *)dest)[j++] = tmp[i++];
	free(tmp);
	((char *)dest)[j] = '\0';
	return (dest);
}
