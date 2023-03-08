##
## EPITECH PROJECT, 2022
## sokoban
## File description:
## Makefile
##

NAME = my_sokoban
CC	= gcc
SRC	= src/main.c \
	src/helpers/sokoban.c \
	src/helpers/file_utils.c \
	src/helpers/end_game.c \
	src/helpers/movements.c \
	src/helpers/map_utils.c \
	src/helpers/errors.c \
	src/helpers/pos.c \
	src/helpers/key_events.c \

OBJ	= $(SRC:.c=.o)

LIBFLAG	= -Wall -Wextra -L ./lib/my -lmy -lncurses

all: $(NAME)
$(NAME):
	make -C ./lib/my/
	$(CC) -o $(NAME) $(SRC) $(LIBFLAG) -g

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	make fclean -C ./lib/my/

re: fclean all

start:	make re
	./$(NAME)
