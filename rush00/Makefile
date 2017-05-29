# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shulley <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/28 16:18:32 by shulley           #+#    #+#              #
#    Updated: 2017/05/28 16:23:08 by shulley          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_retro

SRC = 	Bullet.class.cpp BulletEvent.class.cpp Enemy.class.cpp \
		EnemyEvent.class.cpp	\
		Entities.class.cpp		\
		Spaceship.class.cpp 	\
		Draw.class.cpp			\
		main.cpp				

OBJ = $(SRC:.cpp=.o) Vector.hpp.gch

$(NAME): all

all:
	clang++ -Wall -Werror -Wextra -o $(NAME) $(SRC) -lncurses 

clean:
	/bin/rm -rf $(OBJ)

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re $(NAME)
