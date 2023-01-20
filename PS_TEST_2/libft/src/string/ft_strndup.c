/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 08:06:16 by baalbade          #+#    #+#             */
/*   Updated: 2022/12/05 08:14:47 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *str, size_t n)
{
	char	*dup;
	size_t	str_len;
	size_t	i;
	size_t	j;

	str_len = ft_strlen(str);
	if (str_len < n)
		n = str_len;
	dup = (char *)malloc(sizeof(char) * (n + 1));
	if (!dup)
		return (NULL);
	i = 0;
	while (i < n)
		dup[j++] = str[i++];
	dup[j] = '\0';
	return (dup);
}
