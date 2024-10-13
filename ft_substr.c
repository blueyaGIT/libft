/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 10:39:38 by dalbano           #+#    #+#             */
/*   Updated: 2024/10/13 09:06:42 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	s_len;
	size_t	substr_len;

	s_len = strlen(s);
	if (!s)
		return (NULL);
	if (start >= s_len)
		return (strdup(""));
	substr_len = s_len - start;
	if (substr_len > len)
		substr_len = len;
	substr = (char *)malloc((substr_len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	memcpy(substr, s + start, substr_len);
	substr[substr_len] = '\0';
	return (substr);
}
