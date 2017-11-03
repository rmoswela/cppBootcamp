# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/06/01 18:13:03 by rmoswela          #+#    #+#              #
#    Updated: 2017/06/01 18:13:19 by rmoswela         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OUTPUT = array

SRC = main.cpp\

INC = -I .

CLANG = clang++ -Wall -Werror -Wextra

all:
	$(CLANG) $(SRC) $(INC) -o $(OUTPUT)

clean:
	rm $(OUTPUT)

re: clean all
