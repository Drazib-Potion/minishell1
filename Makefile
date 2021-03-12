SRC	=	src/*.c

OBJ	=	*.o

NAME	=	mysh

UTNAME	=	unit_tests_$(NAME)

all: $(OBJ)
	gcc -o $(NAME) $(OBJ) -L lib/my -lmy -I include

$(OBJ):
	cd lib/my ; make re
	gcc -c $(SRC) -L lib/my -lmy -I include

fclean: clean
	rm -f $(NAME)
	cd lib/my ; make fclean

clean:
	rm -f $(OBJ)

unit_tests: fclean all
	gcc -o tests/$(UTNAME) tests/*.c -L lib/my -lmy --coverage -lcriterion

run_tests: unit_tests
	./tests/$(UTNAME)

re: fclean all
