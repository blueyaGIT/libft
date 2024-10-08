/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:24:37 by dalbano           #+#    #+#             */
/*   Updated: 2024/10/08 12:29:59 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest_str, const void *src_str, size_t n)
{
	size_t		temp;
	char		*dest;
	const char	*src;

	temp = 0;
	dest = (char *)dest_str;
	src = (const char *)src_str;
	while (temp < n)
	{
		dest[temp] = src[temp];
		temp++;
	}
	return (dest_str);
}

// int main()
// {
//     const char src[50] = "Tutorialspoint";
//     char dest[50];
//     strcpy(dest, "Heloooo!!");
//     printf("Before memcpy dest = %s\n", dest);

//     ft_memcpy(dest, src, strlen(src) + 1);

//     printf("After memcpy dest = %s\n", dest);
//     return 0;
// }
