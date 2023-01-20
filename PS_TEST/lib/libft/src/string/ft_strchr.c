/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 17:50:16 by baalbade          #+#    #+#             */
/*   Updated: 2022/12/05 07:24:15 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_char(char c, char needle)
{
	return (c == needle);
}

char	*ft_strchr(const char *haystack, int needle)
{
	int		i;
	char	*str;
	char	to_find;

	str = (char *)haystack;
	to_find = (char)needle;
	if (!to_find)
		return (str + ft_strlen(str));
	i = 0;
	while (str[i] && !ft_check_char(str[i], to_find))
		i++;
	if (ft_check_char(str[i], to_find))
		return (str + i);
	else
		return (NULL);
}
