# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/28 14:32:44 by mtellami          #+#    #+#              #
#    Updated: 2023/05/30 00:07:06 by mtellami         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PmergeMe
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS  = main.cpp PmergeMe.cpp\

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	c++ $(CPPFLAGS) $(OBJS) -o $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -fr $(NAME)

re : fclean all