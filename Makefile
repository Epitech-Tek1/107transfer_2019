##
## EPITECH PROJECT, 2020
## 106bombyx_2019
## File description:
## Makefile
##

## ========================================================================== ##
SRC				=	main.c

BIN				= 	107transfer

CC				= 	gcc

DFLAG			=	-g -W -Wall -Werror -Wfatal-errors -Wpedantic -Wextra \
					-Wnonnull -Wmain -Wmissing-attributes -Wsequence-point -pg

all:			$(BIN)

debug:			$(SRC)
				@$(CC) -o $(BIN) $(SRC) -lm -g $(FLAGS) $(DEBUG) -DDEBUG

$(BIN):			$(SRC)
				@$(CC) -o $(BIN) $(SRC) $(FLAGS) $(LDFLAGS) $(CFLAGS)

fclean:
				@$(RM) $(BIN)

re:				fclean all

.PHONY:			 all, fclean, re, library