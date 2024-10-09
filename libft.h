/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 10:03:11 by dalbano           #+#    #+#             */
/*   Updated: 2024/10/09 11:08:53 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <strings.h>
# include <stdlib.h>
# include <stddef.h>
# include <fcntl.h>
# define BUFF_SIZE 100

int				ft_isascii(int c);
int				ft_atoi(const char *str);
int				ft_isprint(int c);
int				ft_isalnum(int c);
int				ft_strcmp(const char *s1, const char *s2);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_tolower(int c);
int				ft_toupper(int c);
int				ft_memcmp(const void *ptr1, const void *ptr2, size_t n);
void			*ft_memchr(const void *ptr, int c, size_t n);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *dest_str, const void *src_str, size_t n);
void			*ft_memmove(void *dest_str, const void *src_str, size_t numBytes);
void			*ft_memset(void *s, int c, size_t n);
void			ft_putchar_fd(char c, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_striteri(char *s, void (*f)(unsigned int, char *));

char			*ft_strchr(const char *str, int c);
char			*ft_strrchr(const char *str, int c);
char			*ft_strdup(char *src);
char			*ft_strstr(char *str, char *to_find);
char			*ft_strnstr(const char *src, const char *to_find, size_t len);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char			*ft_strcpy(char *dest, const char *src);

unsigned char	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
size_t			ft_strlen(char *str);
#endif