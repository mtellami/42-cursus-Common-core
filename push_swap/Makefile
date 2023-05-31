NAME = push_swap
B_NAME = checker
RM = rm -fr
CFLAGS = -Wall -Wextra -Werror -I .

SRCS =  srcs/operators/push_a.c srcs/operators/push_b.c srcs/operators/swap.c srcs/operators/rotate_a.c \
		srcs/operators/rotate_b.c srcs/operators/r_rotate_a.c srcs/operators/r_rotate_b.c \
		srcs/simple_sort/simple_sort.c srcs/simple_sort/sort_two.c srcs/simple_sort/sort_three.c \
		srcs/simple_sort/sort_four.c srcs/simple_sort/sort_five.c \
		srcs/complex_sort/complex_sort.c srcs/complex_sort/get_index.c srcs/complex_sort/chunks_move_one.c \
		srcs/complex_sort/chunks_move_two.c srcs/complex_sort/sorted_array.c \
		srcs/complex_sort/make_form.c srcs/complex_sort/last_node.c \
		srcs/utils/add_node.c srcs/utils/new_node.c srcs/utils/new_stack.c \
		srcs/utils/pre_last_node.c srcs/utils/stack_size.c srcs/utils/free_memory.c \
		srcs/check/check_error.c srcs/check/is_sorted.c \
		srcs/libft/ft_atoi.c srcs/libft/ft_putstr.c srcs/libft/ft_strlen.c \
		srcs/libft/ft_isdigit.c \
		srcs/push_swap.c \

OBJS = $(SRCS:.c=.o)

B_SRCS = bonus/gnl/get_next_line_utils.c bonus/gnl/get_next_line.c bonus/oper_bonus/pa.c \
		 bonus/oper_bonus/pb.c bonus/oper_bonus/rra.c bonus/oper_bonus/rrb.c \
		 bonus/oper_bonus/ra.c bonus/oper_bonus/rb.c bonus/oper_bonus/sa.c \
		 bonus/oper_bonus/sb.c bonus/checker.c srcs/utils/free_memory.c \
		 srcs/check/check_error.c srcs/check/is_sorted.c srcs/libft/ft_putstr.c \
		 srcs/libft/ft_strcmp.c srcs/libft/ft_strlen.c  \
		 srcs/utils/pre_last_node.c srcs/libft/ft_atoi.c \
		 srcs/libft/ft_isdigit.c srcs/utils/new_stack.c \
		 srcs/utils/add_node.c srcs/utils/new_node.c \


B_OBJS = $(B_SRCS:.c=.o)


$(NAME) : $(OBJS)
		cc $(CFLAGS) $(OBJS) -o $(NAME)

all	: $(NAME)
	
$(B_NAME) : $(B_OBJS)
		cc $(CFLAGS) $(B_OBJS) -o $(B_NAME)

bonus : all $(B_NAME)
		

clean :
		$(RM) $(OBJS) $(B_OBJS)

fclean : clean
		$(RM) $(NAME) $(B_NAME)

re : fclean all