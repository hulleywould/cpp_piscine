# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shulley <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/31 15:08:04 by shulley           #+#    #+#              #
#    Updated: 2017/05/31 15:09:56 by shulley          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = iter

SRC = 	iter.cpp

OBJ = $(SRC:.cpp=.o)

$(NAME): all

all:
	clang++ -Wall -Werror -Wextra -o $(NAME) $(SRC) 

clean:
	/bin/rm -rf $(OBJ)

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re $(NAME)
