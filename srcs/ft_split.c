/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:15:32 by dalbano           #+#    #+#             */
/*   Updated: 2024/10/12 10:57:02 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	is_separator(char c, char separator)
{
	return (c == separator || c == '\0');
}

static void	ft_strcpy_void(char *dest, const char *src, char separator)
{
	while (*src && !is_separator(*src, separator))
		*dest++ = *src++;
	*dest = '\0';
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

static void	fill_word(char **split, const char *s, int *idx,
					 int start, int end)
{
	split[*idx] = (char *)malloc((end - start + 1) * sizeof(char));
	if (split[*idx])
	{
		ft_strncpy_const(split[*idx], &s[start], end - start);
		split[*idx][end - start] = '\0';
	}
	(*idx)++;
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
	int		word_count;

	idx = 0;
	start = 0;
	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	split = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	while (s[start])
	{
		while (s[start] == c)
			start++;
		if (s[start] == '\0')
			break ;
		temp = start;
		while (s[temp] && s[temp] != c)
			temp++;
		fill_word(split, s, &idx, start, temp);
		start = temp;
	}
	split[idx] = NULL;
	return (split);
}
