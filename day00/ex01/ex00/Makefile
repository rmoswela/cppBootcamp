# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/22 11:18:42 by rmoswela          #+#    #+#              #
#    Updated: 2017/05/23 05:18:27 by rmoswela         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = megaphone

CC = clang++

CPPFLAGS = -Wall -Werror -Wextra

SRCS = megaphone.cpp

all: $(NAME)

$(NAME):
	    $(CC) $(CPPFLAGS) -o $(NAME) $(SRCS)
clean:
	rm -f $(NAME)
re: clean all
