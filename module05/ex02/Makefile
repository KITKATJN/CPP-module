NAME = bureaucrat

SRCS = main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp
OBJ 	=	$(SRCS:.cpp=.o)
CC = clang++

CFLAGS  = -Wall -Wextra -Werror
all:	$(NAME)

$(NAME):	$(OBJ) Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

.cpp.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)

clean:
	rm -rf $(OBJ)

fclean:	clean
	rm -rf $(NAME)

re:	fclean $(NAME)

.PHONY:	all clean fclean re
