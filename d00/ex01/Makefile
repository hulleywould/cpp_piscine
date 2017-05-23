# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shulley <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/22 11:34:30 by shulley           #+#    #+#              #
#    Updated: 2017/05/23 10:29:41 by shulley          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Werror -Wextra

NAME = phonebook

SRC =	Phonebook.cpp				\
	  	init_phonebook.cpp		 	\
		searchcontacts.cpp			\
	  	main.cpp

all:
	@clang++ -o $(NAME) $(SRC) $(FLAGS)

fclean:
	@rm $(NAME)

re:
	@rm $(NAME)
	@all

