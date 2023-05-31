# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/26 16:25:28 by mtellami          #+#    #+#              #
#    Updated: 2023/05/26 16:55:52 by mtellami         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = btc
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS  = main.cpp BitcoinExchange.cpp\

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	c++ $(CPPFLAGS) $(OBJS) -o $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -fr $(NAME)

re : fclean all