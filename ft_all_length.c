/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_all_length.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 20:13:07 by dalbano           #+#    #+#             */
/*   Updated: 2024/10/09 20:13:32 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_all_length(int size, char **strs, char *sep)
{
	int	i;
	int	length;
	int	temp;

	i = 0;
	temp = 0;
	length = 0;
	while (sep[i] != '\0')
	{
		temp++;
		i++;
	}
	i = 0;
	while (i < size)
	{
		length += ft_strlen(strs[i]);
		i++;
	}
	return (length += temp);
}