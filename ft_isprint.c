/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:53:50 by dalbano           #+#    #+#             */
/*   Updated: 2024/10/08 09:56:36 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c < 32 || c > 126)
			return (0);
	return (1);
}

// #include <stdio.h>
// #include <ctype.h>
// int main(void)
// {
// 	int c = 10;
// 	int i = 'A';
// 	int a = '-';
// 	printf("%d %d\n", ft_isprint(c), c);
// 	printf("%d %d\n\n", isprint(c), c);
// 	printf("%d %d\n", ft_isprint(i), i);
// 	printf("%d %d\n\n", isprint(i), i);
// 	printf("%d %d\n", ft_isprint(a), a);
// 	printf("%d %d\n\n", isprint(a), a);
// 	return 0;
// }