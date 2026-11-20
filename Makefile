NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror
CC = cc

SRC = ft_printf.c ft_putchar.c put.c puthex.c putstr.c putnbr.c putpntr.c putunbr.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar -rcs $(NAME) $(OBJ)
	@make clean

%.o:%.c 
	@$(CC) $(CFLAGS) -c $< -o $@


clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
