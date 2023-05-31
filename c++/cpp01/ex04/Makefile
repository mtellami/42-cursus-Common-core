# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtellami <mtellami@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/26 07:43:06 by mtellami          #+#    #+#              #
#    Updated: 2023/03/31 14:40:07 by mtellami         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sed
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS  = main.cpp Sed.cpp\

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	c++ $(CPPFLAGS) $(OBJS) -o $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -fr $(NAME)

re : fclean all 