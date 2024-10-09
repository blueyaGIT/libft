/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:38:53 by dalbano           #+#    #+#             */
/*   Updated: 2024/10/09 10:10:08 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

// #include <stdio.h>
// #include <ctype.h>
// int main(void)
// {
// 	int c = '0';
// 	int i = 'A';
// 	int a = '-';
// 	printf("%d %d\n", ft_isalnum(c), c);
// 	printf("%d %d\n\n", isalnum(c), c);
// 	printf("%d %d\n", ft_isalnum(i), i);
// 	printf("%d %d\n\n", isalnum(i), i);
// 	printf("%d %d\n", ft_isalnum(a), a);
// 	printf("%d %d\n\n", isalnum(a), a);
// 	return 0;
// }