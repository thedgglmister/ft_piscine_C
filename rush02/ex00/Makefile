EXECUTABLE = rush-2

SRC = srcs/compare_rushes.c srcs/main.c srcs/rush02.c srcs/get_dimensions.c srcs/rush03.c srcs/list_functions.c srcs/rush00.c srcs/rush04.c srcs/listcmp.c srcs/rush01.c srcs/rush_chars.c srcs/print_match.c srcs/print_fail.c srcs/list_clear.c

OBJ = compare_rushes.o main.o rush02.o get_dimensions.o rush03.o list_functions.o rush00.o rush04.o listcmp.o rush01.o rush_chars.o print_match.o print_fail.o list_clear.o

all: $(EXECUTABLE)

$(EXECUTABLE):
	gcc -Wall -Wextra -Werror -c -Iincludes $(SRC)
	gcc -Wall -Wextra -Werror $(OBJ) -o $(EXECUTABLE)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(EXECUTABLE)

re: fclean all
