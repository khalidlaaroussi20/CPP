SRC = main.cpp
HEADER = Array.hpp
NAME = Array
RM = rm -f
CFLAGS =  -Wall -Wextra -Werror -std=c++98


all : $(NAME)

$(NAME) : $(SRC) $(HEADER)
	c++ $(CFLAGS) $(SRC) -o $(NAME)

clean :
	$(RM) $(NAME)
	
fclean : clean

re: fclean all
	
.PHONY : all clean fclean re