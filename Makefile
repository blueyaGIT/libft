# Variables
NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS_DIR = ./srcs
INC_DIR = ./include
PRINTF_DIR = $(INC_DIR)/printf

# List of source files (all in the parent directory 't1')
SRCS =	$(SRCS_DIR)/ft_atoi.c \
		$(SRCS_DIR)/ft_bzero.c \
		$(SRCS_DIR)/ft_isalnum.c \
		$(SRCS_DIR)/ft_isalpha.c \
		$(SRCS_DIR)/ft_isascii.c \
		$(SRCS_DIR)/ft_isdigit.c \
		$(SRCS_DIR)/ft_isprint.c \
		$(SRCS_DIR)/ft_itoa.c \
		$(SRCS_DIR)/ft_memchr.c \
		$(SRCS_DIR)/ft_memcmp.c \
		$(SRCS_DIR)/ft_memcpy.c \
		$(SRCS_DIR)/ft_memmove.c \
		$(SRCS_DIR)/ft_memset.c \
		$(SRCS_DIR)/ft_putchar_fd.c \
		$(SRCS_DIR)/ft_putendl_fd.c \
		$(SRCS_DIR)/ft_putnbr_fd.c \
		$(SRCS_DIR)/ft_putstr_fd.c \
		$(SRCS_DIR)/ft_split.c \
		$(SRCS_DIR)/ft_strchr.c \
		$(SRCS_DIR)/ft_strdup.c \
		$(SRCS_DIR)/ft_striteri.c \
		$(SRCS_DIR)/ft_strjoin.c \
		$(SRCS_DIR)/ft_strlcat.c \
		$(SRCS_DIR)/ft_strlcpy.c \
		$(SRCS_DIR)/ft_strlen.c \
		$(SRCS_DIR)/ft_strmapi.c \
		$(SRCS_DIR)/ft_strncmp.c \
		$(SRCS_DIR)/ft_strnstr.c \
		$(SRCS_DIR)/ft_strrchr.c \
		$(SRCS_DIR)/ft_strtrim.c \
		$(SRCS_DIR)/ft_substr.c \
		$(SRCS_DIR)/ft_tolower.c \
		$(SRCS_DIR)/ft_toupper.c \
		$(SRCS_DIR)/ft_calloc.c \
		$(SRCS_DIR)/ft_lstnew_bonus.c \
		$(SRCS_DIR)/ft_lstadd_front_bonus.c \
		$(SRCS_DIR)/ft_lstsize_bonus.c \
		$(SRCS_DIR)/ft_lstlast_bonus.c \
		$(SRCS_DIR)/ft_lstadd_back_bonus.c \
		$(SRCS_DIR)/ft_lstdelone_bonus.c \
		$(SRCS_DIR)/ft_lstiter_bonus.c \
		$(SRCS_DIR)/ft_lstclear_bonus.c \
		$(SRCS_DIR)/ft_lstmap_bonus.c

# Object files
OBJS = $(SRCS:.c=.o)

PRINTF_LIB= $(PRINTF_DIR)/libftprintf.a

all: $(NAME)

# Rule to compile the main library
$(NAME): $(OBJS) $(PRINTF_LIB)
	@ar rcs $(NAME) $(OBJS)
	@ar rcs $(NAME) $(PRINTF_LIB)
	@echo "Library $(NAME) created."

# Compile ft_printf
$(PRINTF_LIB):
	@$(MAKE) -C $(PRINTF_DIR)

# Object file compilation rule
.c.o:
	$(CC) $(CFLAGS) -I$(INC_DIR) -c $< -o $@

# Clean object files and libraries
clean:
	@rm -f $(OBJS)
	@$(MAKE) clean -C $(PRINTF_DIR)
	@echo "Object files removed."

# Clean all generated files
fclean: clean
	@rm -f $(NAME)
	@$(MAKE) fclean -C $(PRINTF_DIR)
	@echo "All generated files removed."

# Rebuild everything
re: fclean all

# Phony targets
.PHONY: all clean fclean re