/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:16:34 by dalbano           #+#    #+#             */
/*   Updated: 2024/10/11 10:05:02 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static char	*ft_strncpy_const(char *dest, const char *src, unsigned int n)
{
	unsigned int	temp;

	temp = -1;
	while (temp < n && src[temp] != '\0')
		dest[temp] = src[temp];
	while (temp < n)
		dest[temp] = '\0';
	return (dest);
}

static int	is_in_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	const char	*end;
	size_t		t_length;
	char		*trimmed;

	if (!s1)
		return (NULL);
	while (is_in_set(*s1, set))
		s1++;
	if (*s1 == '\0')
		return (strdup(""));
	end = s1 + strlen(s1) - 1;
	while (is_in_set(*end, set))
		end--;
	t_length = end - s1 + 1;
	trimmed = (char *)malloc(t_length + 1);
	if (!trimmed)
		return (NULL);
	ft_strncpy_const(trimmed, s1, t_length);
	trimmed[t_length] = '\0';
	return (trimmed);
}

// int main() {
//     // Test cases
//     struct {
//         const char *input;
//         const char *set;
//         const char *expected;
//     } tests[] = {
//         {"   Hello, World!   ", " ", "Hello, World!"},
//         {"##Hello, World!##", "#", "Hello, World!"},
//         {"!!!Hello!!!", "!", "Hello"},
//         {"abcde", "xyz", "abcde"},
//         {"", " ", ""},
//         {"   ", " ", ""},
//         {"Test string", "Te", "st string"},
//         {"   Hello   World   ", " ", "Hello   World"}, // Test with multiple spaces
//         {"!!Hello!!World!!", "!", "Hello!!World"}, // Test with no trimming on one side
//     };

//     for (size_t i = 0; i < sizeof(tests) / sizeof(tests[0]); i++) {
//         char *result = ft_strtrim(tests[i].input, tests[i].set);
//         printf("Input: '%s', Set: '%s' => Result: '%s' | Expected: '%s'\n", 
//                tests[i].input, tests[i].set, result ? result : "NULL", tests[i].expected);
//         free(result); // Free the allocated memory
//     }
// 	return (0);
// }