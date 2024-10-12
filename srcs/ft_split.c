/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:15:32 by dalbano           #+#    #+#             */
/*   Updated: 2024/10/12 09:47:28 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	is_separator(char c, char separator)
{
	if (c == '\0' || c == separator)
		return (1);
	return (0);
}

static void	ft_strcpy_void(char *dest, const char *src, char separator)
{
	while (!is_separator(*src, separator))
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
}

int	count_split(const char *str, char sep)
{
	int		temp;
	int		count;

	temp = -1;
	count = 0;
	while (str[++temp])
	{
		if (!is_separator(str[temp], sep))
			count++;
		if (is_separator(str[temp + 1], sep))
			count++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		temp;
	int		end;
	int		cur;

	split = (char **)malloc((count_split(s, c) + 1) * sizeof(*split));
	temp = -1;
	cur = 0;
	while (s[++temp])
	{
		end = 0;
		if (is_separator(s[temp], c))
			temp++;
		else
		{
			while (!is_separator(s[temp + end], c))
				end++;
			split[cur] = (char *)malloc((end +1) * sizeof(char));
			ft_strcpy_void(split[cur], &s[temp], c);
			temp += end;
			cur++;
		}
	}
	split[cur] = 0;
	return (split);
}
