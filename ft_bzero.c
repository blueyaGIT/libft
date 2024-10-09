/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:42:35 by dalbano           #+#    #+#             */
/*   Updated: 2024/10/09 10:20:53 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			temp;

	if (n == 0)
		return ;
	str = (unsigned char *)s;
	temp = -1;
	while (++temp < n)
	{
		str[temp] = '\0';
	}
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main(void)
// {
// 	char str[] = "almost every programmer should know memset!";
// 	ft_bzero (str,6);
// 	puts (str);
// 	printf("\n");
// 	char str1[] = "almost every programmer should know memset!";
// 	bzero (str1,6);
// 	puts (str1);
// 	return 0;
// }