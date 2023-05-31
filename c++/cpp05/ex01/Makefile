# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtellami <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/10 18:37:56 by mtellami          #+#    #+#              #
#    Updated: 2023/04/11 00:41:10 by mtellami         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = form
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS  = main.cpp Bureaucrat.cpp Form.cpp\

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	c++ $(CPPFLAGS) $(OBJS) -o $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -fr $(NAME)

re : fclean all