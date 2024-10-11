/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:36:03 by dalbano           #+#    #+#             */
/*   Updated: 2024/10/11 10:05:02 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strstr(char *str, char *to_find)
{
	int		x;
	char	*pos0;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			pos0 = str;
			x = 1;
			while (to_find[x] != '\0' && str[x] == to_find[x])
			{
				x++;
			}
			if (to_find[x] == '\0')
				return (str);
			else
				to_find = to_find - (str - pos0);
		}
		str++;
	}
	return (0);
}
