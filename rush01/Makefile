# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/22 11:18:42 by rmoswela          #+#    #+#              #
#    Updated: 2017/06/04 15:36:23 by rmoswela         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = ft_gkrellm

CC = clang++

CPPFLAGS = -Wall -Werror -Wextra

SRCS = CPUModule.cpp \
	   DateModule.cpp \
	   HostnameModule.cpp \
	   OSinfoModule.cpp \
	   RAMModule.cpp \
	   NetworkModule.cpp \
	   main.cpp

all: $(NAME)

$(NAME):
	$(CC) $(CPPFLAGS) -o $(NAME) $(SRCS)
clean:
	rm -f $(NAME)
re: clean all
