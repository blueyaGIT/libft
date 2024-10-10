/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:46:17 by dalbano           #+#    #+#             */
/*   Updated: 2024/10/10 10:16:50 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	while (*s != '\0')
	{
		write (fd, s, 1);
		s++;
	}
	write (fd, " ", 1);
}

// #include <fcntl.h>  // For open() and O_WRONLY
// #include <unistd.h> // For close()

// void ft_putendl_fd(char *s, int fd);

// int main(void)
// {
//     // Example 1: Output to standard output (fd = 1)
//     ft_putendl_fd("Hello, world!", 1); 

//     // Example 2: Output to a file
//     int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644); 

//     if (fd == -1)  // Check if file open was successful
//     {
//         write(1, "Failed to open the file\n", 24);
//         return 1;
//     }

//     ft_putendl_fd("This is written to the file.", fd);

//     // Close the file after writing
//     close(fd);

//     return 0;
// }
