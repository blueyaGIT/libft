/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:32:30 by dalbano           #+#    #+#             */
/*   Updated: 2024/10/11 10:05:02 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
// #include <stdio.h>
// #include <ctype.h>
// int main(void)
// {
// 	int c = '0';
// 	for(c = ','; c < '<'; c++)
// 	{
// 		printf("%d %d\n", ft_isdigit(c), c);
// 		printf("%d %d\n\n", isdigit(c), c);
// 	}
// 	return 0;
// }