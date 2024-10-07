/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:40:17 by dalbano           #+#    #+#             */
/*   Updated: 2024/10/07 17:41:42 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	length;
	int	src_length;

	length = 0;
	src_length = ft_strlen(src);
	while (length < size - 1 && src[length] != '\0')
	{
		dest[length] = src[length];
		length = length + 1;
	}
	dest[length] = '\0';
	return (src_length);
}

int	ft_strlen(char *str)
{
	int		str_length;

	str_length = 0;
	while (str[str_length] != '\0')
	{
		str_length++;
	}
	return (str_length);
}
