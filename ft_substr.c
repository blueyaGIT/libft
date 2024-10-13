/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 10:39:38 by dalbano           #+#    #+#             */
/*   Updated: 2024/10/13 09:04:47 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	s_len = strlen(s);  // Length of input string
	size_t	substr_len;         // Actual length to allocate

	if (!s)
		return (NULL);

	// If start is beyond the length of the string, return an empty string
	if (start >= s_len)
		return (strdup(""));

	// Determine the actual length to allocate (min between len and remaining part of the string)
	substr_len = s_len - start;
	if (substr_len > len)
		substr_len = len;

	// Allocate memory for the substring + '\0'
	substr = (char *)malloc((substr_len + 1) * sizeof(char));
	if (!substr)
		return (NULL);

	// Copy the substring and add null terminator
	memcpy(substr, s + start, substr_len);
	substr[substr_len] = '\0';

	return (substr);
}
