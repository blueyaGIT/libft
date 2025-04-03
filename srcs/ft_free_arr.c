/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_arr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 17:26:27 by dalbano           #+#    #+#             */
/*   Updated: 2025/04/03 11:10:11 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Frees a string array and sets it to NULL.
 * @param arr The address of the string array to free.
 */
void	ft_free_arr(char ***arr)
{
	int	i;

	if (!arr || !*arr) // Check if arr or *arr is NULL
		return;

	i = 0;
	while ((*arr)[i])
	{
		free((*arr)[i]);
		(*arr)[i] = NULL;  // Properly NULLify the freed element
		i++;
	}
	free(*arr);
	*arr = NULL;  // Prevent use-after-free
}
