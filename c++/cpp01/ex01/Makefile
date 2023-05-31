# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/26 03:19:31 by mtellami          #+#    #+#              #
#    Updated: 2023/03/30 23:24:30 by mtellami         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  moarBrainz
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS  = main.cpp Zombie.cpp zombieHorde.cpp\

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	c++ $(CPPFLAGS) $(OBJS) -o $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -fr $(NAME)

re : fclean all