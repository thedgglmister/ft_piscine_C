EXECUTABLE = ft_tail

SRC = srcs/ft_tail.c srcs/print_functions.c

OBJ = ft_tail.o print_functions.o

all: $(EXECUTABLE)

$(EXECUTABLE): 
	gcc -Wall -Wextra -Werror -c -Iincludes $(SRC)
	gcc -Wall -Wextra -Werror $(OBJ) -o $(EXECUTABLE)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(EXECUTABLE)

re: fclean $(EXECUTABLE)
