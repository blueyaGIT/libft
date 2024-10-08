/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 11:02:30 by dalbano           #+#    #+#             */
/*   Updated: 2024/10/08 11:13:55 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

void	*ft_memcpy(void *dest_str, const void *src_str, size_t n)
{
	size_t	temp;

	temp = -1;
	ft_strstr(dest_str, src_str);
	while (++temp < n)
	{
		src_str = dest_str;
		*src_str++;
		*dest_str++;
	}
	return (dest_str);
}

#include <stdio.h>
#include <string.h>

int main ()
{
   const char src[50] = "Tutorialspoint";
   char dest[50];
   strcpy(dest,"Heloooo!!");
   printf("Before memcpy dest = %s\n", dest);
   ft_memcpy(dest, src, strlen(src) + 1);
   printf("After memcpy dest = %s\n", dest);
   return(0);
}
