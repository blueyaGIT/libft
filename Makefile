# Variables
NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS =	ft_atoi.c
		ft_bzero.c
		ft_countwords.c
		ft_isalnum.c
		ft_isalpha.c
		ft_isascii.c
		ft_isdigit.c
		ft_isprint.c
		ft_isspace.c
		ft_itoa.c
		ft_malloc_str.c
		ft_memchr.c
		ft_memcmp.c
		ft_memcpy.c
		ft_memmove.c
		ft_memset.c
		ft_putchar_fd.c
		ft_putendl_fd.c
		ft_putnbr_fd.c
		ft_putstr_fd.c
		ft_split.c
		ft_strchr.c
		ft_strcpy.c
		ft_strdup.c
		ft_strdup_const.c
		ft_striteri.c
		ft_strlcat.c
		ft_strlcpy.c
		ft_strlen.c
		ft_strlen_const.c
		ft_strmapi.c
		ft_strncmp.c
		ft_strncpy.c
		ft_strnstr.c
		ft_strrchr.c
		ft_strstr.c
		ft_strtrim.c
		ft_tolower.c
		ft_toupper.c
		libft.a
		libft.h
OBJS = $(SRCS:.c=.o)

# Compile the library
$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "Library $(NAME) created."

# Default rule
all: $(NAME)

# Clean object files
clean:
	@rm -f $(OBJS)
	@echo "Object files removed."

# Clean everything (object files and library)
fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) removed."

# Rebuild everything
re: fclean all
