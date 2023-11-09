NAME = megaphone

CPPFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++

RM = rm -rf

SRC = megaphone.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CPPFLAGS) $(SRC) -o $(NAME)

clean:
	$(RM) $(NAME)

fclean:
	$(RM) $(NAME)

re: fclean all

.PHONY: all fclean clean re