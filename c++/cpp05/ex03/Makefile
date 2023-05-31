# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtellami <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/10 18:37:56 by mtellami          #+#    #+#              #
#    Updated: 2023/04/14 05:29:00 by mtellami         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = intern
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp Bureaucrat.cpp AForm.cpp\
	PresidentialPardonForm.cpp\
	RobotomyRequestForm.cpp\
	ShrubberyCreationForm.cpp\
	Intern.cpp\

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	c++ $(CPPFLAGS) $(OBJS) -o $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -fr $(NAME)

re : fclean all