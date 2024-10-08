/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:38:53 by dalbano           #+#    #+#             */
/*   Updated: 2024/10/08 09:46:10 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	int	alp;
	int	dig;
	int	lowercase;
	int	uppercase;

	lowercase = (c >= 'a' && c <= 'z');
	uppercase = (c >= 'A' && c <= 'Z');
	if (lowercase || uppercase)
		alp = 1;
	else
		alp = 0;
	if (c >= '0' && c <= '9')
		dig = 1;
	else
		dig = 0;
	if (alp || dig == 1)
		return (1);
	return (0);
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