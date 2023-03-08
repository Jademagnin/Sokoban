##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## ok
##

SRC = my_putchar.c \
	my_put_nbr.c \
	my_putstr.c \
	my_strlen.c \
	my_strcpy.c \
	my_strcmp.c \
	my_strlowcase.c \
	my_strcat.c \
	my_strdup.c \
	my_char_isalpha.c \
	get_min.c \
	my_str_to_arr.c \
	my_getnbr.c \
	my_itoa.c \
	my_revstr.c \
	my_array_len.c \
	my_array_dup.c \
	my_strchar.c \
	my_get_char_occur.c \
	my_str_to_word_array.c \

OBJ = $(SRC:.c=.o)

NAME = libmy.a

all: $(NAME)

$(NAME):	$(OBJ)
	ar	rc	$(NAME)	$(OBJ)
	cp $(NAME) ../$(NAME)
	cp my.h ../../include/my.h

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)
	rm -f ../$(NAME)

re:	fclean all
