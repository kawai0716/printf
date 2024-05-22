SRCS = printf_c.c printf_d.c printf_i.c printf_p.c printf_s.c printf_u.c printf_x.c printf_Xo.c printf.c printf_%.c \

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
OBJC = $(SRCS:.c=.o)
OBJCB = $(SRCSB:.c=.o)
RM = rm -f
AR = ar rc

ifeq ($(MAKECMDGOALS), bonus)
		OBJ = $(OBJC) $(OBJCB)
else
		OBJ = $(OBJC)
endif

all: $(NAME)

$(NAME): $(OBJ)
		$(AR) $@ $^
		ranlib $(NAME)

bonus $(NAME)

cd%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		$(RM) $(OBJC) $(OBJCB)
	
fclean clean:
		$(RM) $(OBJC) $(OBJCB)

re: fclean all

.PHONY: all clean fclean re
