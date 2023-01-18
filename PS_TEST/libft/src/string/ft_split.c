/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 07:58:48 by baalbade          #+#    #+#             */
/*   Updated: 2022/11/09 10:01:47 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *str, char split)
{
	size_t	res;
	size_t	i;

	res = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && str[i] == split)
			++i;
		if (str[i])
			++res;
		while (str[i] && str[i] != split)
			++i;
	}
	return (res);
}

static char	*ft_spe_strdup(char const *s, char c)
{
	int		i;
	char	*dst;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	dst = (char *)malloc(sizeof(char) * (i + 1));
	if (!dst)
		return (0);
	i = 0;
	while (s[i] && s[i] != c)
	{
		dst[i] = s[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	**ft_split(const char *s, char c)
{
	char	**tab;
	int		word_count;
	int		i;
	int		j;

	word_count = ft_count_words((char *)s, c);
	tab = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!tab)
		return (NULL);
	tab[word_count] = NULL;
	i = 0;
	j = 0;
	while (j < word_count)
	{
		while (s[i] && s[i] == c)
			i++;
		tab[j++] = ft_spe_strdup(s + i, c);
		while (s[i] && s[i] != c)
			i++;
	}
	tab[j] = NULL;
	return (tab);
}
