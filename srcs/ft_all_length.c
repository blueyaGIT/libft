/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_all_length.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 20:13:07 by dalbano           #+#    #+#             */
/*   Updated: 2024/10/12 09:55:01 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_all_length(int size, char **strs, char *sep)
{
	int	temp;
	int	length;
	int	sep_length;

	sep_length = 0;
	length = 0;
	temp = 0;
	while (sep[temp] != '\0')
	{
		sep_length++;
		temp++;
	}
	temp = 0;
	while (temp < size)
	{
		length += ft_strlen(strs[temp]);
		temp++;
	}
	if (size > 1)
		length += sep_length * (size - 1);
	return (length);
}
