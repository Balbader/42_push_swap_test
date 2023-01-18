/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 13:37:40 by baalbade          #+#    #+#             */
/*   Updated: 2022/12/05 14:15:49 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_str;
	char	*str;
	size_t	i;
	size_t	j;

	if (!s || !f)
		return (NULL);
	str = (char *)s;
	new_str = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!new_str)
		return (NULL);
	j = 0;
	i = 0;
	while (str[i])
	{
		new_str[j] = (f)(i, str[i]);
		j++;
		i++;
	}
	new_str[j] = '\0';
	return (new_str);
}
