# Variables
NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

# List of source files (all in the parent directory 't1')
SRCS =	ft_atoi.c \
		ft_bzero.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_split.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_striteri.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strmapi.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_calloc.c

BSRCS = ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstiter.c \
		ft_lstclear.c \
		ft_lstmap.c

# Object files
OBJS = $(SRCS:.c=.o)
OBJS_B = $(BSRCS:.c=.o)

# Rule to compile the main library
$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "Library $(NAME) created."

# Rule to compile the bonus files only when requested
bonus: $(OBJS) $(OBJS_B)
	@ar rcs $(NAME) $(OBJS) $(OBJS_B)
	@echo "Bonus library $(NAME) created."

# Rule for compiling .c files into .o files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Default rule
all: $(NAME)

# Clean object files
clean:
	@rm -f $(OBJS) $(OBJS_B)
	@echo "Object files removed."

# Clean everything (object files and library)
fclean: clean
	@rm -f $(NAME)
	@echo "Library $(NAME) removed."

# Rebuild everything
re: fclean all

.PHONY: all clean fclean re bonus
