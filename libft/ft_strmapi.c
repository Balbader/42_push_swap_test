/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:43:36 by baalbade          #+#    #+#             */
/*   Updated: 2022/11/09 14:43:40 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_str;
	size_t	i;
	size_t	j;
	size_t	len;

	len = ft_strlen((char *)s);
	new_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!new_str)
		return (NULL);
	j = 0;
	i = 0;
	while (s[i])
	{
		new_str[j] = (f)(i, ((char *)s)[i]);
		j++;
		i++;
	}
	new_str[j] = '\0';
	return (new_str);
}
