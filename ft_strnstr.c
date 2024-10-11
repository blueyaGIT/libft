/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:47:59 by dalbano           #+#    #+#             */
/*   Updated: 2024/10/11 10:05:02 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strnstr(const char *src, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	if (*to_find == '\0')
		return ((char *)src);
	i = -1;
	while (++i < len && src[i] != '\0')
	{
		j = -1; 
		while (to_find[++j] != '\0' && (i + j) < len)
		{
			if (src[i + j] != to_find[j])
				break ;
		}
		if (to_find[j] == '\0')
			return ((char *)&src[i]);
	}
	return (NULL);
}

// int main()
// {
//     const char *src = "Hello, world!";
//     const char *to_find = "world";
//     char *result;

//     // Testing the custom strnstr implementation
//     result = ft_strnstr(src, to_find, 13);

//     if (result != NULL)
//         printf("Found '%s' in '%s': %s\n", to_find, src, result);
//     else
//         printf("Substring '%s' not found in '%s'.\n", to_find, src);

//     return 0;
// }
