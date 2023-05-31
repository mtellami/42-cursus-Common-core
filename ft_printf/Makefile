NAME = libftprintf.a
FLAGS = -Wall -Wextra -Werror
SRCS = ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_putnbr_u.c ft_puthex.c
OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	ar -rc $(NAME) $(OBJS)

$(OBJS) : $(SRCS)
	cc $(FLAGS) -c $(SRCS)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all