/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:15:32 by dalbano           #+#    #+#             */
/*   Updated: 2024/10/13 09:04:47 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_separator(char c, char separator)
{
	return (c == separator || c == '\0');
}

int	count_split(const char *str, char sep)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*str)
	{
		if (!is_separator(*str, sep))
		{
			if (!in_word)
			{
				in_word = 1;
				count++;
			}
		}
		else
			in_word = 0;
		str++;
	}
	return (count);
}

static void	fill_word(char **split, const char *s, int start, int length)
{
	char	*word;

	word = (char *)malloc((length + 1) * sizeof(char));
	if (word)
	{
		ft_strncpy_const(word, &s[start], length);
		word[length] = '\0';
		*split = word;
	}
}

static int	count_words(const char *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s == c)
			in_word = 0;
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		idx;
	int		start;
	int		temp;

	idx = 0;
	start = 0;
	split = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!s || !split)
		return (NULL);
	while (s[start])
	{
		if (s[start] != c)
		{
			temp = start;
			while (s[temp] && s[temp] != c)
				temp++;
			fill_word(&split[idx++], s, start, temp - start);
			start = temp;
		}
		else
			start++;
	}
	split[idx] = NULL;
	return (split);
}
