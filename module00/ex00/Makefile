# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/05 10:05:36 by lleiria-          #+#    #+#              #
#    Updated: 2023/04/05 10:09:54 by lleiria-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	megaphone.cpp \

OBJS	=	$(addprefix objs/,$(SRCS:.cpp=.o))

CPPFLAGS	=	c++ -Wall -Wextra -Werror -std=c++98

RM		=	rm -f

NAME	=	megaphone

all:	$(NAME)

objs/%.o: %.cpp
	@mkdir -p objs
	$(CPPFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
	$(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	@$(RM) $(OBJS)

fclean:	clean
	@$(RM) $(NAME)

re:	fclean all