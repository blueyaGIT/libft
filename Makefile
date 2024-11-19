# Variables
NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

PRINTF_DIR = ./extra/printf
PRINTF = $(PRINTF_DIR)/libftprintf.a

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

BSRCS = ft_lstnew_bonus.c \
		ft_lstadd_front_bonus.c \
		ft_lstsize_bonus.c \
		ft_lstlast_bonus.c \
		ft_lstadd_back_bonus.c \
		ft_lstdelone_bonus.c \
		ft_lstiter_bonus.c \
		ft_lstclear_bonus.c \
		ft_lstmap_bonus.c

# Object files
OBJS = $(SRCS:.c=.o)
OBJS_B = $(BSRCS:.c=.o)

all: $(PRINTF) $(NAME) bonus

# Rule to compile the main library
$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "Library $(NAME) created."

# Rule to compile the bonus files only when requested
bonus: $(OBJS) $(OBJS_B)
	@ar rcs $(NAME) $(OBJS) $(OBJS_B)
	@echo "Bonus library $(NAME) created."

# Rule to compile libftprintf
$(PRINTF):
	@cd $(PRINTF_DIR) && make

# Object file compilation rule
.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

# Clean object files and libraries
clean:
	@rm -f $(OBJS)
	@cd $(PRINTF_DIR) && make clean
	@echo "Object files removed."

# Clean all generated files
fclean: clean
	@rm -f $(NAME) $(OBJS_B)
	@cd $(PRINTF_DIR) && make fclean
	@echo "All generated files removed."

# Rebuild everything
re: fclean all

# Phony targets
.PHONY: all clean fclean re $(PRINTF)