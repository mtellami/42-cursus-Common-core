# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtellami <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/10 18:37:56 by mtellami          #+#    #+#              #
#    Updated: 2023/04/14 07:38:15 by mtellami         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = scalar
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS  = main.cpp ScalarConverter.cpp\

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	c++ $(CPPFLAGS) $(OBJS) -o $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -fr $(NAME)

re : fclean all