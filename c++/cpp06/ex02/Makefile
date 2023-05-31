# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtellami <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/02 23:41:37 by mtellami          #+#    #+#              #
#    Updated: 2023/05/03 18:18:35 by mtellami         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = real_type
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS  = main.cpp Base.cpp generate.cpp identify.cpp\

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	c++ $(CPPFLAGS) $(OBJS) -o $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -fr $(NAME)

re : fclean all