# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/18 15:50:52 by lleiria-          #+#    #+#              #
#    Updated: 2023/04/18 15:51:25 by lleiria-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX 			= c++

CXXFLAGS 		= -Wall -Wextra -Werror -std=c++98

RM 			= rm -f

NAME 		= ex02

INCLUDE 	= -I ./

SRCS 		= 	main.cpp \

OBJS		= $(SRCS:.cpp=.o)

all:		$(NAME)

$(NAME): 	$(OBJS)
			$(CXX) $(CXXFLAGS) $(SRCS) $(INCLUDE) -c
			$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME) $(INCLUDE)

clean:
			$(RM) -r $(OBJS)

fclean : 	clean
			$(RM) $(NAME)

re:			fclean all