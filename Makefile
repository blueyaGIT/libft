# Variables
NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_strmapi.c ft_strlen_const.c ft_striteri.c ft_putnbr_fd.c # Add your source files here
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
