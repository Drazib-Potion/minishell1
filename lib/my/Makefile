SRC	=	*.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

re: fclean all

all:	$(OBJ)
	ar rc $(NAME) $(OBJ)

$(OBJ):	$(SRC)
	gcc -c $(SRC) -I .

fclean: clean
	rm -f $(NAME)

clean:
	rm -f *.o
