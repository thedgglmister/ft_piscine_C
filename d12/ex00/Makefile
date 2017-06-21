EXECUTABLE = ft_display_file

SRC = srcs/ft_display_file.c

OBJ = ft_display_file.o

all: $(EXECUTABLE)

$(EXECUTABLE): $(SRC)
	gcc -Wall -Wextra -Werror -c -Iincludes $(SRC)
	gcc -Wall -Wextra -Werror $(OBJ) -o $(EXECUTABLE)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(EXECUTABLE)

re: fclean $(EXECUTABLE)
