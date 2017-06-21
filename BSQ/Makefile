EXECUTABLE = bsq

SRCS = srcs/is_numeric.c srcs/print_map.c srcs/list_functions.c srcs/process_globals.c srcs/ft_atoi.c srcs/find_square.c srcs/main.c srcs/read_map_functions.c srcs/number_map_functions.c

OBJS = is_numeric.o print_map.o list_functions.o process_globals.o ft_atoi.o find_square.o main.o read_map_functions.o number_map_functions.o

all: $(EXECUTABLE)

$(EXECUTABLE):
	gcc -Wall -Wextra -Werror -Iincludes -c $(SRCS)
	gcc -Wall -Wextra -Werror $(OBJS) -o $(EXECUTABLE)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(EXECUTABLE)

re: fclean $(EXECUTABLE)
