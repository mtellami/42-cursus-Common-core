# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/28 11:55:53 by mtellami          #+#    #+#              #
#    Updated: 2023/05/28 11:56:25 by mtellami         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = RPN
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS  = main.cpp RPN.cpp\

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	c++ $(CPPFLAGS) $(OBJS) -o $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -fr $(NAME)

re : fclean all