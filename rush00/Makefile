NAME = ft_retro

CFLAGS = -Wall -Wextra -Werror -lpanel -lncurses

CC = clang++

SRCS =	main.cpp		\
		GameEntity.cpp		\
		GamePlay.cpp		\
		Player.cpp		\
		Enemy.cpp		\
		Missile.cpp		\
		Screen.cpp		\
		KeyEvent.cpp		\

OBJS =	main.o			\
		GameEntity.o		\
		Enemy.o			\
		GamePlay.o		\
		Player.o		\
		Missile.o		\
		Screen.o		\
		KeyEvent.o		\


all: $(NAME)

$(NAME):
		@$(CC) $(CFLAGS) $(SRCS) -o $(NAME) 

clean:
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME)
re: fclean all
