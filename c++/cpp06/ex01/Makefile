# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtellami <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/02 18:30:15 by mtellami          #+#    #+#              #
#    Updated: 2023/05/02 18:31:15 by mtellami         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = serialization
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS  = main.cpp Data.cpp Serializer.cpp\

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	c++ $(CPPFLAGS) $(OBJS) -o $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -fr $(NAME)

re : fclean all