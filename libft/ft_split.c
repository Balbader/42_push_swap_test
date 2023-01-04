/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:56:07 by baalbade          #+#    #+#             */
/*   Updated: 2022/12/13 10:56:43 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char sep)
{
	size_t	res;
	size_t	i;

	res = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == sep)
			++i;
		if (s[i])
			++res;
		while (s[i] && s[i] != sep)
			++i;
	}
	return (res);
}

static size_t	ft_word_len(char const *s, unsigned int start, char sep)
{
	size_t	res;

	res = 0;
	while (s[start + res] && s[start + res] != sep)
		++res;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char			**res;
	size_t			nb_words;
	size_t			i;
	unsigned int	start;

	if (!s)
		return (NULL);
	nb_words = ft_count_words(s, c);
	res = (char **)malloc(sizeof(char *) * (nb_words + 1));
	if (!res)
		return (res);
	i = 0;
	start = 0;
	while (i < nb_words)
	{
		while (s[start] == c)
			++start;
		res[i] = ft_substr(s, start, ft_word_len(s, start, c));
		++i;
		while (s[start] && s[start] != c)
			++start;
	}
	res[i] = NULL;
	return (res);
}
