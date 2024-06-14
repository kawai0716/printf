CC = cc
CFLAGS = -Wall -Wextra -Werror -I./include/
RM = rm -rf
NAME = libftprintf.a

SRCS = src/ft_putchar.c src/ft_putstr.c src/ft_printf_di.c src/ft_printf_p.c src/ft_printf_u.c src/ft_printf_x.c src/ft_printf_x2.c src/ft_printf.c 
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C ./libft
	cp libft/libft.a $(NAME)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

src/%.o: src/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(MAKE) clean -C ./libft
	$(RM) $(OBJS)

fclean: clean
	$(MAKE) fclean -C ./libft
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
