/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:44:11 by dalbano           #+#    #+#             */
/*   Updated: 2024/10/09 09:40:49 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *ptr, int c, size_t n)
{
	const unsigned char	*p;
	size_t				i;

	p = (const unsigned char *)ptr;
	i = -1;
	while (++i < n)
	{
		if (p[i] == (unsigned char)c)
		{
			return ((void *)(p + i));
		}
	}
	return (NULL);
}

// int main()
// {
//     const char str[] = "Hello, world!";
//     char ch = 'o';
//     char *result;

//     // Testing the custom memchr implementation
//     result = ft_memchr(str, ch, sizeof(str));

//     if (result != NULL)
//         printf("Character '%c' found at position: %ld\n", ch, result - str);
//     else
//         printf("Character '%c' not found.\n", ch);

//     return 0;
// }
