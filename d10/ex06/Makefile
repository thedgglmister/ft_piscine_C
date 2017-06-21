# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: biremong <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/07 22:45:56 by biremong          #+#    #+#              #
#    Updated: 2016/11/07 23:02:00 by biremong         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXECUTABLE = do-op

SRC = srcs/main.c srcs/functions.c srcs/mk_fnct_array.c

OBJ = main.o functions.o mk_fnct_array.o

all: $(EXECUTABLE)

$(EXECUTABLE): $(SRC)
	gcc -Wall -Wextra -Werror -Iincludes -c $(SRC)
	gcc $(OBJ) -o $(EXECUTABLE)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(OBJ) $(EXECUTABLE)

re: fclean $(EXECUTABLE)
