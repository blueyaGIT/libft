/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:45:49 by dalbano           #+#    #+#             */
/*   Updated: 2024/10/08 15:55:38 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0')
	{
		if (*str == (char)c)
			return (char *)str;
		str++;
	}
	if (c == '\0')
		return ((char *)str);

	return (NULL);
}

// int main()
// {
//     const char str[] = "Hello, world!";
//     char ch = 'o';
//     char *result;
//     result = ft_strchr(str, ch);
//     if (result != NULL)
//         printf("Character '%c' found at position: %ld\n", ch, result - str);
//     else
//         printf("Character '%c' not found.\n", ch);
//     return 0;
// }
