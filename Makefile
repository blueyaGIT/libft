# Variables
NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Source directory and include directory
SRCDIR = srcs
INCDIR = includes

# List of source files
SRCS =	$(SRCDIR)/ft_all_length.c \
		$(SRCDIR)/ft_atoi.c \
		$(SRCDIR)/ft_bzero.c \
		$(SRCDIR)/ft_countwords.c \
		$(SRCDIR)/ft_isalnum.c \
		$(SRCDIR)/ft_isalpha.c \
		$(SRCDIR)/ft_isascii.c \
		$(SRCDIR)/ft_isdigit.c \
		$(SRCDIR)/ft_isprint.c \
		$(SRCDIR)/ft_isspace.c \
		$(SRCDIR)/ft_itoa.c \
		$(SRCDIR)/ft_malloc_str.c \
		$(SRCDIR)/ft_memchr.c \
		$(SRCDIR)/ft_memcmp.c \
		$(SRCDIR)/ft_memcpy.c \
		$(SRCDIR)/ft_memmove.c \
		$(SRCDIR)/ft_memset.c \
		$(SRCDIR)/ft_putchar_fd.c \
		$(SRCDIR)/ft_putendl_fd.c \
		$(SRCDIR)/ft_putnbr_fd.c \
		$(SRCDIR)/ft_putstr_fd.c \
		$(SRCDIR)/ft_split.c \
		$(SRCDIR)/ft_strchr.c \
		$(SRCDIR)/ft_strcpy.c \
		$(SRCDIR)/ft_strdup.c \
		$(SRCDIR)/ft_strdup_const.c \
		$(SRCDIR)/ft_striteri.c \
		$(SRCDIR)/ft_strjoin.c \
		$(SRCDIR)/ft_strlcat.c \
		$(SRCDIR)/ft_strlcpy.c \
		$(SRCDIR)/ft_strlen.c \
		$(SRCDIR)/ft_strlen_const.c \
		$(SRCDIR)/ft_strmapi.c \
		$(SRCDIR)/ft_strncmp.c \
		$(SRCDIR)/ft_strncpy.c \
		$(SRCDIR)/ft_strnstr.c \
		$(SRCDIR)/ft_strrchr.c \
		$(SRCDIR)/ft_strstr.c \
		$(SRCDIR)/ft_strtrim.c \
		$(SRCDIR)/ft_tolower.c \
		$(SRCDIR)/ft_toupper.c

# Objects files
OBJS = $(SRCS:.c=.o)

# Compile the library
$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "Library $(NAME) created."

# Rule for compiling .c files into .o files
%.o: %.c
	$(CC) $(CFLAGS) -I $(INCDIR) -c $< -o $@

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

.PHONY: all clean fclean re
