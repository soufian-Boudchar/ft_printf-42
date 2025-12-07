NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror
CC = cc
AR = ar rcs
SRC = ft_adresse.c ft_printf.c ft_putchar.c ft_putstr.c ft_unsigned.c ft_lowhex.c ft_putnbr.c ft_strlen.c ft_upphex.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o : %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all fclean clean re