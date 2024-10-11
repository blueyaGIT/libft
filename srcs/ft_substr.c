/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 10:39:38 by dalbano           #+#    #+#             */
/*   Updated: 2024/10/11 10:55:57 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	temp;

	if (!s)
		return (NULL);
	if (start >= ft_strlen_const(s))
		return (ft_strdup(""));
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	temp = 0;
	while (temp < len && s[start + temp] != '\0')
	{
		substr[temp] = s[start + temp];
		temp++;
	}
	substr[temp] = '\0';
	return (substr);
}
