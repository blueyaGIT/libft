/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:31:23 by dalbano           #+#    #+#             */
/*   Updated: 2024/10/08 16:42:53 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

int main()
{
    char dest_str[] = "oldstring";
    const char src_str[] = "newstring";
    printf("Before memmove dest = %s, src = %s\n", dest_str, src_str);
    ft_memmove(dest_str, src_str, 9);
    printf("After memmove dest = %s, src = %s\n", dest_str, src_str);
    return 0;
}
