/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 08:59:30 by dalbano           #+#    #+#             */
/*   Updated: 2024/10/11 10:55:12 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_isalpha(int c)
{
	int	lowercase;
	int	uppercase;

	lowercase = (c >= 'a' && c <= 'z');
	uppercase = (c >= 'A' && c <= 'Z');
	if (!(lowercase || uppercase))
		return (0);
	return (1);
}
