
NAME	=	bureaucrat

COMP	=	clang++ -Wall -Wextra -Werror -g -std=c++98 -pedantic

SRC		=	Bureaucrat.cpp RobotomyRequestForm.cpp Form.cpp ShrubberyCreationForm.cpp \
			PresidentialPardonForm.cpp Intern.cpp main.cpp

HEADER	=	Bureaucrat.hpp Form.hpp RobotomyRequestForm.hpp ShrubberyCreationForm.hpp \
			PresidentialPardonForm.hpp Intern.hpp

O_FOLD	=	objs/
OBJ	:=	$(addprefix $(O_FOLD), $(SRC:.cpp=.o))

$(O_FOLD)%.o:		%.cpp $(HEADER)
		@mkdir -p objs
		$(COMP) -c -o $@ $<

all:	$(NAME)

$(NAME): $(OBJ)
	$(COMP) $(OBJ) -o$(NAME)

clean:
	rm -rf $(OBJ)
	@rm -rf $(O_FOLD)

fclean:	clean
	rm -rf $(NAME)

re:	fclean all

.PHONY: clean fclean re all
