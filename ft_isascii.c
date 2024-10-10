/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:48:35 by dalbano           #+#    #+#             */
/*   Updated: 2024/10/10 10:16:55 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0x00 && c <= 0x7F);
}

// #include <stdio.h>
// #include <ctype.h>
// int main(void)
// {
// 	int c = 0x16;
// 	int a = 0x80;
// 	int i = 0x5A;

// 	printf("%d\n", ft_isascii(c));
// 	printf("%d\n\n", isascii(c));
// 	printf("%d\n", ft_isascii(a));
// 	printf("%d\n\n", isascii(a));
// 	printf("%d\n", ft_isascii(i));
// 	printf("%d\n\n", isascii(i));
// 	return (0);
// }