# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtellami <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/03 23:10:33 by mtellami          #+#    #+#              #
#    Updated: 2023/05/03 23:10:48 by mtellami         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = span
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS  = main.cpp Span.cpp\

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	c++ $(CPPFLAGS) $(OBJS) -o $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -fr $(NAME)

re : fclean all