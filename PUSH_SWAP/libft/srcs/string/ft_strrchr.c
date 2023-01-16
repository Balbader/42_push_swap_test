/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 07:52:56 by baalbade          #+#    #+#             */
/*   Updated: 2022/12/05 08:01:38 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *haystack, int needle)
{
	size_t	i;

	i = ft_strlen(haystack);
	if (needle == '\0')
		return ((char *)haystack + i);
	while (i > 0)
	{
		if (haystack[i] == (char)needle)
			return ((char *)haystack + i);
		i--;
	}
	return (NULL);
}
