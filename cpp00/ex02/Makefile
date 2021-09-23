
NAME	=	account

COMP	=	clang++ -Wall -Wextra -Werror -std=c++98

SRC		=	Account.cpp tests.cpp

OBJ		=	$(SRC:.cpp=.o)

%.o:		%.cpp
		$(COMP) -c -o $@ $<

all:	$(NAME)

$(NAME): $(OBJ)
	$(COMP) $(OBJ) -o$(NAME)

clean:
	rm $(OBJ)

fclean:	clean
	rm $(NAME)

re:	fclean all

.PHONY: clean fclean re all
