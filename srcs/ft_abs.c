/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:02:47 by eweiberl          #+#    #+#             */
/*   Updated: 2025/03/26 14:39:09 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Returns the absolute value of an int (INT_MAX returns INT_MAX)
/// @param nb 
/// @return the absolute value of the int
int	ft_abs(int nb)
{
	if (nb >= 0)
		return (nb);
	else if (nb == -2147483648)
		return (nb);
	else
		return (-nb);
}
