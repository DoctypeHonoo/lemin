##
## EPITECH PROJECT, 2022
## B-CPE-200-MPL-2-1-lemin-guillaume.lemoine
## File description:
## Makefile
##

SRC		=	$(wildcard *.c)

OBJ		=	$(SRC:.c=.o)

CFLAGS	=	-W -Wall -Wextra -Werror -g3 -Iinclude/

BIN		=	lem_in

LIB 	=	./lib/libmy.a

all: $(BIN)

$(BIN): $(OBJ) $(LIB)
	@$(CC) $(OBJ) -o $(BIN) -L./lib -lmy
	@echo "Make success"

$(LIB):
	@make -C ./lib/my
	@echo "Lib success"

clean:
	@$(RM) $(OBJ)
	@make clean -C lib/my
	@echo "clean success"

fclean: clean
	@$(RM) $(BIN)
	@make fclean -C lib/my
	@echo "fclean success"

re: fclean all
