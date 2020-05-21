/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hetha <hetha@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/20 18:07:11 by hetha             #+#    #+#             */
/*   Updated: 2020/05/21 12:23:01 by hetha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(const char *s, char c)
{
	size_t		cnt;
	size_t		in_substring;

	in_substring = 0;
	cnt = 0;
	while (*s != '\0')
	{
		if (in_substring == 1 && *s == c)
			in_substring = 0;
		if (in_substring == 0 && *s != c)
		{
			in_substring = 1;
			cnt++;
		}
		s++;
	}
	return (cnt);
}

static size_t	ft_word_len(const char *s, char c)
{
	size_t		len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

static char		**ft_logic(const char *s, char c, char **t, size_t index)
{
	size_t	nb_word;

	nb_word = ft_count_words((char *)s, c);
	while (nb_word--)
	{
		while (*s == c && *s != '\0')
			s++;
		t[index] = ft_substr((char *)s, 0, ft_word_len((char *)s, c));
		if (t[index] == NULL)
		{
			while (index != 0)
				free(t[--index]);
			free(t);
			return (NULL);
		}
		s = s + ft_word_len(s, c);
		index++;
	}
	t[index] = NULL;
	return (t);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**t;
	size_t	index;

	index = 0;
	if (!s || !c)
		return (NULL);
	t = (char **)malloc(sizeof(*t) * (ft_count_words((char *)s, c) + 1));
	if (t == NULL)
		return (NULL);
	return (ft_logic((char *)s, c, t, index));
}
