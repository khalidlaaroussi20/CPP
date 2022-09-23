SRC = main.cpp
HEADER = iter.hpp
NAME = Iter
RM = rm -f
CFLAGS =  -Wall -Wextra -Werror


all : $(NAME)

$(NAME) : $(SRC) $(HEADER)
	c++ $(CFLAGS) $(SRC) -o $(NAME)

clean :
	$(RM) $(NAME)
	
fclean : clean

re: fclean all
	
.PHONY : all clean fclean re