/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_to_arr_front.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 16:06:03 by dalbano           #+#    #+#             */
/*   Updated: 2025/04/02 16:07:33 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * prepend_str_to_array - Adds a new string to the beginning of a
 *                        NULL-terminated array of strings.
 *
 * This function reallocates the given string array to prepend a duplicate
 * of the provided string and ensures the array remains NULL-terminated.
 *
 * @param array: The original array of strings (can be NULL).
 * @param str: The string to add. A duplicate of this string will be stored.
 *
 * @return A pointer to the new array with the added string at the front, or NULL on allocation failure.
 */
char **ft_str_to_array_front(char **array, char *str)
{
    size_t count = 0;
    char **new_array;
    size_t i;

    if (array)
    {
        while (array[count])
            count++;
    }
    new_array = ft_realloc(array, sizeof(char *) * (count + 2));
    if (!new_array)
        return (NULL);
    for (i = count; i > 0; i--)
        new_array[i] = new_array[i - 1];
    new_array[0] = ft_strdup(str);
    if (!new_array[0])
        return (NULL);
    new_array[count + 1] = NULL;
    return (new_array);
}
