/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 10:22:12 by dalbano           #+#    #+#             */
/*   Updated: 2024/10/09 11:11:12 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int static	ft_strlen_const(const char *str)
{
	int		str_length_da;

	str_length_da = 0;
	while (str[str_length_da] != '\0')
	{
		str_length_da++;
	}
	return (str_length_da);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*memory;

	i = -1;
	if (s == NULL || f == NULL)
		return (NULL);
	memory = malloc((ft_strlen_const(s) + 1) * sizeof(char));
	if (!memory)
		return (NULL);
	while (s[++i])
		memory[i] = (*f)(i, s[i]);
	memory[i] = '\0';
	return (memory);
}

char modify_char(unsigned int i, char c)
{
	i = 32;
    if (c >= 'a' && c <= 'z')  // If character is lowercase
        return c - i;
	return c;
}

int main(void)
{
    char str[] = "abcdef";  // Input string
    char *result;

    // Call ft_strmapi with the modify_char function
    result = ft_strmapi(str, modify_char);

    if (result == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Print the transformed string
    printf("Original string: %s\n", str);
    printf("Transformed string: %s\n", result);

    // Free the allocated memory for the result
    free(result);

    return 0;
}