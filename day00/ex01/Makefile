# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/22 11:18:42 by rmoswela          #+#    #+#              #
#    Updated: 2017/05/23 05:19:59 by rmoswela         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = phonebook

CC = clang++

CPPFLAGS = -Wall -Werror -Wextra

SRCS = Phonebook.cpp \
	   Contact.cpp \
	   UserCommands.cpp

all: $(NAME)

$(NAME):
	$(CC) $(CPPFLAGS) -o $(NAME) $(SRCS)
clean:
	rm -f $(NAME)
re: clean all
