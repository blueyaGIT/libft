/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_const.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:33:45 by dalbano           #+#    #+#             */
/*   Updated: 2024/10/11 10:05:02 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strdup_const(const char *src)
{
	int		count;
	char	*array;
	int		temp;

	count = 0;
	temp = 0;
	while (src[count] != '\0')
		count++;
	array = (char *)malloc((count + 1) * sizeof(char));
	if (array == NULL)
		return (0);
	while (temp <= count)
	{
		array[temp] = src[temp];
		temp++;
	}
	return (array);
}
