NAME = pipex
BONUS = pipex_bonus
CFLAGS = -Wall -Wextra -Werror -I includes/
SRCS = srcs/pipex.c \
	   libft/ft_split.c libft/ft_putendl_fd.c libft/ft_strdup.c libft/ft_strjoin.c \
	   libft/ft_strlen.c srcs/free_arr.c srcs/errors.c srcs/in_exec.c srcs/out_exec.c \
	   srcs/get_data.c libft/ft_strstr.c srcs/get_path.c \

B_SRCS = bonus/pipex_bonus.c \
		 libft/ft_putendl_fd.c libft/ft_strdup.c libft/ft_strjoin.c\
		 libft/ft_strlen.c srcs/free_arr.c libft/ft_strcmp.c libft/ft_strstr.c\
		 srcs/errors.c srcs/get_path.c srcs/get_data.c libft/ft_split.c\
		 bonus/in_exec_bonus.c bonus/out_exec_bonus.c bonus/here_doc.c \
		 bonus/get_line.c libft/ft_strchr.c libft/ft_substr.c\
		

B_OBJS = $(B_SRCS:.c=.o)

OBJS = $(SRCS:.c=.o)

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