# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gasouza <gasouza@student.42sp.org.br >     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/15 20:42:57 by gasouza           #+#    #+#              #
#    Updated: 2024/03/17 17:07:04 by gasouza          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= iter
SRCS		= main.cpp

COMPILER 	= c++
CFLAGS		= -Wall -Werror -Wextra -std=c++98 -g
CLEANUP		= rm -rf


all: $(NAME)

$(NAME): $(SRCS)
	$(COMPILER) $^ $(CFLAGS) -o $@

clean:
	$(CLEANUP) $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re