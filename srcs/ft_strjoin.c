/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 20:12:16 by dalbano           #+#    #+#             */
/*   Updated: 2024/10/12 09:47:28 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		temp;
	int		i;
	int		j;
	char	*join;

	join = (char *)malloc(ft_all_length(size, strs, sep) + 1);
	if (!join)
		return (NULL);
	i = -1;
	temp = 0;
	while (++i < size)
	{
		j = -1;
		while (strs[i][++j] != 0)
			join[temp++] = strs[i][j];
		if (i < size - 1)
		{
			j = -1;
			while (sep[++j] != '\0')
				join[temp++] = sep[j];
		}
	}
	join[temp] = '\0';
	return (join);
}
