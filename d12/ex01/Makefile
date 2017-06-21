EXECUTABLE = ft_cat

SRC = srcs/ft_cat.c

OBJ = ft_cat.o

all: $(EXECUTABLE)

$(EXECUTABLE): $(SRC)
	gcc -Wall -Wextra -Werror -Iincludes -c $(SRC)
	gcc $(OBJ) -o $(EXECUTABLE)

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(EXECUTABLE)

re: fclean all
