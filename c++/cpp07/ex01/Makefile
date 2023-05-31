# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtellami <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/03 18:46:28 by mtellami          #+#    #+#              #
#    Updated: 2023/05/03 19:54:56 by mtellami         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = iter
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS  = main.cpp\

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	c++ $(CPPFLAGS) $(OBJS) -o $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -fr $(NAME)

re : fclean all