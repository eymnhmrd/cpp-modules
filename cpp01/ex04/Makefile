NAME = sed

CPPFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++

RM = rm -rf

SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)


all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CPPFLAGS) main.cpp -o $(NAME)

clean:
	$(RM) $(NAME)

fclean:
	$(RM) $(NAME)

re: fclean all

.PHONY: clean all fclean re