/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:26:30 by dalbano           #+#    #+#             */
/*   Updated: 2024/10/11 10:05:02 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			temp;

	str = (unsigned char *)s;
	temp = -1;
	while (++temp < n)
	{
		str[temp] = c;
	}
	return (s);
}

// int main(void)
// {
// 	char str[] = "almost every programmer should know memset!";
// 	ft_memset (str,'-',6);
// 	puts (str);
// 	printf("\n");
// 	char str1[] = "almost every programmer should know memset!";
// 	memset (str1,'-',6);
// 	puts (str1);
// 	return 0;
// }