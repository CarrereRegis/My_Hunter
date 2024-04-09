##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## makefile
##
SRC	=	./src/game_loop.c \
		./lib/my_putchar.c \
		./lib/my_putstr.c \
		./src/ducky_animation.c \
		./src/create.c \
		./src/display.c \
		./src/event_manager.c	\
		./src/main.c

OBJ	=	${SRC:.c=.o}

NAME	=	my_hunter

GRAPHICS	 =	-lcsfml-graphics -lcsfml-system -lcsfml-audio -lcsfml-window

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) -g $(OBJ) $(GRAPHICS)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all clean

.PHONY: all clean fclean re o
