# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lleiria- <lleiria-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/05 15:03:46 by lleiria-          #+#    #+#              #
#    Updated: 2023/04/05 16:44:02 by lleiria-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	main.cpp \
			PhoneBook.cpp \
			Contact.cpp

OBJS	=	$(addprefix objs/,$(SRCS:.cpp=.o))

CPPFLAGS	=	c++ -Wall -Wextra -Werror -std=c++98

RM		=	rm -f

NAME	=	PhoneBook

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