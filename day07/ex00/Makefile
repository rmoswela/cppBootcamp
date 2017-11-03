# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/06/01 03:26:54 by rmoswela          #+#    #+#              #
#    Updated: 2017/06/01 03:30:06 by rmoswela         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = whatever

CC = clang++

CPPFLAGS = -Wall -Werror -Wextra

SRCS = whatever.cpp

all: $(NAME)

$(NAME):
	$(CC) $(CPPFLAGS) -o $(NAME) $(SRCS)

clean:
	rm -f $(NAME)
re: clean all
