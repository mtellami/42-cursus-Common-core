# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtellami <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/03 18:32:40 by mtellami          #+#    #+#              #
#    Updated: 2023/05/03 18:34:22 by mtellami         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = whatever
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