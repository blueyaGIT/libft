/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy_const.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 21:07:23 by dalbano           #+#    #+#             */
/*   Updated: 2024/10/13 09:04:47 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy_const(char *dest, const char *src, unsigned int n)
{
	char			*ptr;
	unsigned int	i;

	ptr = dest;
	i = 0;
	while (i < n && src[i] != '\0')
	{
		*ptr++ = src[i];
		i++;
	}
	while (i < n)
	{
		*ptr++ = '\0';
		i++;
	}
	return (dest);
}
