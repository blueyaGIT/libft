/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 11:15:07 by dalbano           #+#    #+#             */
/*   Updated: 2024/10/11 10:55:12 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_itoa(int n)
{
	char	*nbr;

	nbr = (char *)malloc((10 +1) * sizeof(char));
	if (n >= 0 && nbr)
	{
		*--nbr = '0' + (n % 10);
		n /= 10;
		while (n != 0)
		{
			*--nbr = '0' + (n % 10);
			n /= 10;
		}
	}
	else if (nbr)
	{
		*--nbr = '0' - (n % 10);
		n /= 10;
		while (n != 0)
		{
			*--nbr = '0' - (n % 10);
			n /= 10;
		}
		*--nbr = '-';
	}
	return (nbr);
}
