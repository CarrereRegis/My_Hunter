##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## makefile
##
SRC	=	game_loop.c \
		my_putchar.c \
		my_putstr.c \
		ducky_animation.c \
		create.c \
		display.c \
		event_manager.c	\
		main.c

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
