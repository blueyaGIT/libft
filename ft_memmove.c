/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:31:23 by dalbano           #+#    #+#             */
/*   Updated: 2024/10/08 12:43:46 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*memmove(void *dest_str, const void *src_str, size_t numBytes)
{
	size_t		temp;
	char		*dest;
	const char	*src;

	temp = -1;
	dest = (char *)dest_str;
	src = (const char *)src_str;
	while (++temp < numBytes)
	{
		dest[temp] = src[temp];
	}
	return (dest_str);
}

// #include <stdio.h>
// #include <string.h>

// int main () 
// {
//    char dest_str[] = "oldstring";
//    const char src_str[]  = "newstring";
//    printf("Before memmove dest = %s, src = %s\n", dest_str, src_str);
//    memmove(dest_str, src_str, 9);
//    printf("After memmove dest = %s, src = %s\n", dest_str, src_str);
//    return(0);
// }