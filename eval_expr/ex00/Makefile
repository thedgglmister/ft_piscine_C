EXECUTABLE = eval_expr

SRC = srcs/main.c srcs/shunting_yard.c srcs/stack_functions.c srcs/type_checks.c srcs/parse_queue.c

OBJ = main.o shunting_yard.o stack_functions.o type_checks.o parse_queue.o

all: $(EXECUTABLE)

$(EXECUTABLE):
	gcc -Wall -Wextra -Werror -c -Iincludes $(SRC)
	gcc -Wall -Wextra -Werror $(OBJ) -o $(EXECUTABLE)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(EXECUTABLE)

re: fclean $(EXECUTABLE)
