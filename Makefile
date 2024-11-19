NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_strlen.c ft_puthex.c ft_putu.c ft_putp.c

SRCB = bonus/ft_printf_bonus.c bonus/ft_putchar_bonus.c bonus/ft_putstr_bonus.c bonus/ft_putnbr_bonus.c bonus/ft_strlen_bonus.c bonus/ft_puthex_bonus.c bonus/ft_putu_bonus.c bonus/ft_putp_bonus.c



OBJ = $(SRC:.c=.o)

OBJB = $(SRCB:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

bonus: $(OBJB)
	ar rcs $(NAME) $(OBJB)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(OBJB)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONEY: all clean fclean re