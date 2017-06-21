EXECUTABLE = libft.a

SRC = srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_putchar.c \
	  srcs/ft_strlen.c

OBJ = ft_swap.o ft_putstr.o ft_strcmp.o ft_putchar.o ft_strlen.o


all: $(EXECUTABLE)

$(EXECUTABLE): $(SRC)
	gcc -Wall -Wextra -Werror -c -Iincludes $(SRC)
	ar rc $(EXECUTABLE) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(OBJ) $(EXECUTABLE)

re: fclean $(EXECUTABLE)
