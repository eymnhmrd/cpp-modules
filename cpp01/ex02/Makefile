NAME = ref

CPPFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++

RM = rm -rf
SRC = main.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CPPFLAGS) main.cpp -o $(NAME)
	
clean:
	$(RM) $(NAME)

fclean:
	$(RM) $(NAME)

re: clean all

.PHONY: all clean fclean re