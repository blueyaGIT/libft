/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 15:59:16 by dalbano           #+#    #+#             */
/*   Updated: 2025/04/01 15:59:24 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_realloc - Reallocates memory block to a new size.
 *
 * This function allocates a new memory block of size new_size, copies the content
 * from the old memory block (up to the smaller of old_size or new_size), frees the 
 * old memory block, and returns a pointer to the new block.
 *
 * @param ptr: Pointer to the memory block previously allocated.
 * @param old_size: The size of the memory block pointed to by ptr.
 * @param new_size: The new size for the memory block.
 *
 * @return A pointer to the newly allocated memory block, or NULL if allocation fails.
 */
void	*ft_realloc(void *ptr, size_t old_size, size_t new_size)
{
    void	*new_ptr;

    if (!ptr)
        return (malloc(new_size));
    if (new_size == 0)
    {
        free(ptr);
        return (NULL);
    }
    new_ptr = malloc(new_size);
    if (!new_ptr)
        return (NULL);
    ft_memcpy(new_ptr, ptr, (old_size < new_size ? old_size : new_size));
    free(ptr);
    return (new_ptr);
}
