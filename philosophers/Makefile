NAME = philo
BONUS = philo_bonus
CFLAGS = -Wall -Wextra -Werror -pthread -I includes
SRCS = philos/philo.c \
	philos/ft_atol.c philos/ft_errors.c philos/initialize.c philos/launch.c \
	philos/destroy.c philos/routine.c philos/current_time.c philos/actions.c \
	philos/is_dead.c philos/state.c philos/waiting.c \

B_SRCS = philos_bonus/philo_bonus.c \
	philos_bonus/ft_atol.c philos_bonus/ft_errors.c \
	philos_bonus/actions.c philos_bonus/current_time.c philos_bonus/initialize.c \
	philos_bonus/launch.c philos_bonus/routine.c philos_bonus/state.c philos_bonus/waiting.c \
	philos_bonus/is_dead.c philos_bonus/destroy.c\


OBJS = $(SRCS:.c=.o)

B_OBJS = $(B_SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
		cc $(CFLAGS) $(OBJS) -o $(NAME)

bonus : $(BONUS)

$(BONUS) : $(B_OBJS)
		cc $(CFLAGS) $(B_OBJS) -o $(BONUS)

clean :
		rm -fr $(OBJS) $(B_OBJS)

fclean : clean
		rm -fr $(NAME) $(BONUS)

re : fclean all