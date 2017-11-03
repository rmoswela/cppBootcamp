# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/06/01 05:58:01 by rmoswela          #+#    #+#              #
#    Updated: 2017/06/01 06:01:24 by rmoswela         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = iter

CC = clang++

CPPFLAGS = -Wall -Werror -Wextra

SRCS = iter.cpp

all: $(NAME)

$(NAME):
	$(CC) $(CPPFLAGS) -o $(NAME) $(SRCS)

clean:
	rm -f $(NAME)

re: clean all
