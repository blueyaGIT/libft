/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_cpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 17:18:48 by dalbano           #+#    #+#             */
/*   Updated: 2025/03/22 18:06:37 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Creates a deep copy of a string array.
 * @param arr The string array to copy.
 * @return The copied string array on success, NULL on error.
 */
char	**ft_arr_cpy(char **arr)
{
	int		i;
	char	**cpy;

	i = 0;
	while (arr[i])
		i++;
	cpy = malloc((i + 1) * sizeof(char *));
	if (!cpy)
		return (NULL);
	cpy[i] = NULL;
	return (cpy);
}
