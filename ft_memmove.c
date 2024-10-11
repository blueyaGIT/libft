/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:31:23 by dalbano           #+#    #+#             */
/*   Updated: 2024/10/11 10:16:48 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memmove(void *dest_str, const void *src_str, size_t numBytes)
{
	size_t		temp;
	char		*dest;
	const char	*src;

	dest = (char *)dest_str;
	src = (const char *)src_str;
	if (dest == src)
		return (dest_str);
	if (dest > src && dest < src + numBytes)
	{
		temp = numBytes;
		while (temp > 0)
		{
			temp--;
			dest[temp] = src[temp];
		}
	}
	else
	{
		temp = -1;
		while (++temp < numBytes)
			dest[temp] = src[temp];
	}
	return (dest_str);
}
