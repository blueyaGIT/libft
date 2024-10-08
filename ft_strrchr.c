/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:57:34 by dalbano           #+#    #+#             */
/*   Updated: 2024/10/08 16:01:13 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *str, int c)
{
	char	*last_occurrence;

	last_occurrence = NULL;
	while (*str != '\0')
	{
		if (*str == (char)c)
		{
			last_occurrence = (char *)str;
		}
		str++;
	}

	if (c == '\0')
		return ((char *)str);
	return (last_occurrence);
}

// int main()
// {
//     const char str[] = "Hello, world!";
//     char ch = 'o';
//     char *result;

//     // Testing the custom strrchr implementation
//     result = ft_strrchr(str, ch);

//     if (result != NULL)
//         printf("Last occurrence of '%c' found at position: %ld\n", ch, result - str);
//     else
//         printf("Character '%c' not found.\n", ch);

//     return 0;
// }
