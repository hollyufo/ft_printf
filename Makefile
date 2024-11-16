NAME = ft_printf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c ft_bzero.c ft_memset.c \
      ft_strlen.c ft_calloc.c \
      ft_putstr_fd.c ft_putchar_fd.c \
      ft_strlcpy.c

OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ) # Generate the static library archive

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ # Compile each .c file to .o

all: $(NAME)

clean:
	rm -f $(OBJ) # Remove object files

fclean: clean
	rm -f $(NAME) # Remove both object files and the archive

re: fclean all

.PHONY: all clean fclean re