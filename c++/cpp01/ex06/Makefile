# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/27 01:16:57 by mtellami          #+#    #+#              #
#    Updated: 2023/03/27 01:26:21 by mtellami         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harlFilter
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS  = main.cpp Harl.cpp\

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	c++ $(CPPFLAGS) $(OBJS) -o $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -fr $(NAME)

re : fclean all 