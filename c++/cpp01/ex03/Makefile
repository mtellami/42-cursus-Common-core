# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/26 04:39:50 by mtellami          #+#    #+#              #
#    Updated: 2023/03/31 01:59:13 by mtellami         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = unnecessary
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS  = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp\

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	c++ $(CPPFLAGS) $(OBJS) -o $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -fr $(NAME)

re : fclean all