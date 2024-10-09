/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 20:48:14 by dalbano           #+#    #+#             */
/*   Updated: 2024/10/09 18:28:18 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, char *src, unsigned int n)
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