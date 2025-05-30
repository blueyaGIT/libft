/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 10:03:11 by dalbano           #+#    #+#             */
/*   Updated: 2025/05/21 13:32:19 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <fcntl.h>
# include <limits.h>
# include <stdbool.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

// extra lib inclutions
# include "include/fprintf/ft_fprintf.h"
# include "include/get_next_line/get_next_line.h"
# include "include/printf/ft_printf.h"

# define BUFF_SIZE 100

int					ft_atoi(const char *str);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_isalnum(int c);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_tolower(int c);
int					ft_toupper(int c);
int					ft_memcmp(const void *ptr1, const void *ptr2, size_t n);
void				*ft_memchr(const void *ptr, int c, size_t n);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dest_str, const void *src_str, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memset(void *s, int c, size_t n);
void				ft_putchar_fd(char c, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
void				*ft_calloc(size_t count, size_t size);

char				*ft_strchr(const char *str, int c);
char				*ft_strdup(char *src);
char				*ft_strrchr(const char *str, int c);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strnstr(const char *src, const char *to_find,
						size_t len);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_itoa(int n);
char				*ft_strtrim(char const *s1, char const *set);
char				**ft_split(char const *s, char c);

unsigned int		ft_strlcat(char *dest, char const *src, unsigned int size);
unsigned int		ft_strlcpy(char *dest, const char *src, unsigned int size);
size_t				ft_strlen(const char *str);

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list				*ft_lstnew(void *content);
t_list				*ft_lstlast(t_list *lst);
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));
int					ft_lstsize(t_list *lst);
void				ft_lstadd_front(t_list **lst, t_list *new);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
void				ft_lstclear(t_list **lst, void (*del)(void *));

// Extras
char				*ft_strcat(char *dest, char *src);
char				*ft_strncat(char *dest, char *src, unsigned int nb);
int					ft_strcmp(char *s1, char *s2);
char				*ft_strcpy(char *dest, char *src);
char				*ft_strstr(char *str, char *to_find);
void				ft_putchar(int c);
void				ft_swap(int *a, int *b);
void				ft_putstr(char *str);
int					ft_is_alpha(char *str);
int					ft_is_lowercase(char *str);
int					ft_is_numeric(char *str);
int					ft_is_printable(char *str);
int					ft_is_uppercase(char *str);
char				*ft_strlowcase(char *str);
char				*ft_strupcase(char *str);
void				ft_putnbr(int nb);
int					ft_find_next_prime(int nb);
int					ft_fibonacci(int index);
int					ft_is_prime(int nb);
int					ft_factorial(int nb);
int					ft_power(int nb, int power);
int					ft_sqrt(int nb);
void				ft_print_params(int argc, char **argv);
void				ft_sort_params(int argc, char **argv);
void				ft_sort_params_output(char *str);
void				ft_sort_params_sort(int argc, char **argv);
int					ft_sort_params_compareascii(char *str1, char *str2);
int					*ft_range(int min, int max);
char				*ft_strndup(const char *src, size_t n);
int					ft_abs(int nb);
double				ft_atof(const char *str);
void				ft_lstfree(t_list *lst);
void				ft_nodefree(t_list *lst);
char				**ft_arr_cpy(char **arr);
void				ft_free_arr(char **arr);
int					ft_arrlen(char **arr);
void				ft_free_ptr(void *temp);
char				*ft_strncpy(char *dest, const char *src, unsigned int n);
int					ft_isspace(int c);
long long			ft_atoll(const char *str, bool *overflow);
void				*ft_realloc(void *ptr, size_t size);
char				**ft_str_to_array_back(char **array, char *str);
char				**ft_str_to_array_front(char **array, char *str);
long				ft_atol(const char *str);
#endif /* LIBFT_H */