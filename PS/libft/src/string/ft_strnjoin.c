/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 11:18:51 by baalbade          #+#    #+#             */
/*   Updated: 2022/12/05 11:32:42 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnjoin(char *s1, const char *s2, const size_t n)
{
	size_t	len1;
	size_t	len2;
	char	*new_str;

	len1 = 0;
	len2 = 0;
	if (s1 != NULL)
		len1 = ft_strlen(s1);
	if (s2 != NULL)
		len2 = ft_strlen(s2);
	if (len2 > n)
		len2 = n;
	new_str = (char *)malloc((len1 + len2 + 1) + sizeof(char));
	if (new_str != NULL)
	{
		if (s1 != NULL)
			ft_strncpy(new_str, (char *)s1, len1 + 1);
		if (s2 != NULL)
			ft_strncpy(new_str + len1, (char *)s2, len2 + 1);
		new_str[len1 + len2] = '\0';
	}
	free(s1);
	return (new_str);
}
