NAME = animal

SRCS = main.cpp Dog.cpp Cat.cpp Animal.cpp Brain.cpp
OBJ 	=	$(SRCS:.cpp=.o)
CC = clang++

CFLAGS  = -Wall -Wextra -Werror
all:	$(NAME)

$(NAME):	$(OBJ) Animal.hpp Dog.hpp Cat.hpp Brain.hpp
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

.cpp.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)

clean:
	rm -rf $(OBJ)

fclean:	clean
	rm -rf $(NAME)

re:	fclean $(NAME)

.PHONY:	all clean fclean re
