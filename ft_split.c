/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:15:32 by dalbano           #+#    #+#             */
/*   Updated: 2024/10/14 11:28:35 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_split(char **split, int words)
{
	while (words-- > 0)
		free(split[words]);
	free(split);
}

static int	count_words(const char *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word && ++count)
			in_word = 1;
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*alloc_word(const char *s, int len)
{
	char	*word;

	word = (char *)malloc((len + 1) * sizeof(char));
	if (word)
	{
		ft_strlcpy(word, s, len + 1);
	}
	return (word);
}

static int	inside_if(char **split, char c, int start, char const *s)
{
	int	words;
	int	idx;

	idx = 0;
	words = start;
	while (s[words] && s[words] != c)
		words++;
	split[idx++] = alloc_word(s + start, words - start);
	if (!split)
	{
		free_split(split, idx - 1);
		return (12278);
	}
	start = words;
	return (idx);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		start;
	int		words;
	int		idx;

	start = 0;
	words = count_words(s, c);
	split = (char **)malloc((words + 1) * sizeof(char *));
	if (!s || *split == (void *)0)
		return (NULL);
	while (s[start])
	{
		if (s[start] != c)
		{
			idx = inside_if(split, c, start, s);
			if (idx == 12278)
				return (NULL);
		}
		else
			start++;
	}
	return (split[idx] = NULL, split);
}
