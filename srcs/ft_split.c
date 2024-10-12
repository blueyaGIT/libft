/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:15:32 by dalbano           #+#    #+#             */
/*   Updated: 2024/10/12 10:47:01 by dalbano          ###   ########.fr       */
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

static char	**fill_split(char **split, const char *s, char c)
{
	int	idx;
	int	temp;
	int	start;

	idx = 0;
	temp = 0;
	while (s[temp])
	{
		while (is_separator(s[temp], c))
			temp++;
		if (s[temp] == '\0')
			break ;
		start = temp;
		while (s[temp] && !is_separator(s[temp], c))
			temp++;
		split[idx] = (char *)malloc((temp - start + 1) * sizeof(char));
		if (!split[idx])
			return (NULL);
		ft_strcpy_void(split[idx], &s[start], c);
		idx++;
	}
	split[idx] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		word_count;

	word_count = count_split(s, c);
	split = (char **)malloc((word_count + 1) * sizeof(*split));
	if (!split)
		return (NULL);
	return (fill_split(split, s, c));
}
