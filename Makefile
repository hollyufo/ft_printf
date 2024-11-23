NAME = ft_printf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_printf.c ft_putchar_fd.c ft_putfloat_fd.c ft_puthex.c \
      ft_putnbr_fd.c ft_putnbr_unsigned_fd.c ft_putptr_fd.c ft_putstr_fd.c

OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
	rm -f $(OBJ) # Remove object files

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re