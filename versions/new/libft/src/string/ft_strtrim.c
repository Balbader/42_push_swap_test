/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 11:38:09 by baalbade          #+#    #+#             */
/*   Updated: 2022/12/05 12:58:39 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_set(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimed;
	size_t	i;
	size_t	j;
	size_t	k;

	trimed = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!trimed)
		return (NULL);
	i = 0;
	while (ft_is_set(s1[i], set) == 1)
		i++;
	j = ft_strlen(s1);
	while (ft_is_set(s1[j - 1], set) == 1)
		j--;
	k = 0;
	while (i < j)
		trimed[k++] = s1[i++];
	trimed[k] = '\0';
	return (trimed);
}
