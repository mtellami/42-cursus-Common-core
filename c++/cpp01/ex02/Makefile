# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/26 03:53:14 by mtellami          #+#    #+#              #
#    Updated: 2023/03/31 01:41:19 by mtellami         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  thisIsBrain
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