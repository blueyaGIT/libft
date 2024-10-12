/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:16:34 by dalbano           #+#    #+#             */
/*   Updated: 2024/10/12 10:27:48 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	is_in_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	const char	*end;
	size_t		t_length;
	char		*trimmed;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && is_in_set(*s1, set))
		s1++;
	if (*s1 == '\0')
		return (strdup(""));
	end = s1 + strlen(s1) - 1;
	while (end > s1 && is_in_set(*end, set))
		end--;
	t_length = end - s1 + 1;
	trimmed = (char *)malloc(t_length + 1);
	if (!trimmed)
		return (NULL);
	strncpy(trimmed, s1, t_length);
	trimmed[t_length] = '\0';
	return (trimmed);
}
