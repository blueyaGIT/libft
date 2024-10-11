/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:52:05 by dalbano           #+#    #+#             */
/*   Updated: 2024/10/11 10:05:02 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// #include <fcntl.h>  // For open() and O_WRONLY
// #include <unistd.h> // For close()

// int main(void)
// {
//     // Example 1: Output to standard output (fd = 1)
//     ft_putchar_fd('A', 1);  // Should print 'A' to the terminal
//     write(1, "\n", 1);  // Print a newline for clarity

//     // Example 2: Output to a file
//     int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);  // Open file for writing

//     if (fd == -1)  // Check if file open was successful
//     {
//         write(1, "Failed to open the file\n", 24);
//         return 1;
//     }

//     ft_putchar_fd('B', fd);  // Write 'B' to the file

//     // Close the file after writing
//     close(fd);

//     return 0;
// }
