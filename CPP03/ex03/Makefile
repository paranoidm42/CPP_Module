NAME	= main

CC		= c++ -std=c++98
CFLAGS	= -Wall -Werror -Wextra  -Wno-shadow -Wshadow


SOURCES	= $(wildcard *.cpp)

all		: $(NAME)

$(NAME)	: $(SOURCES)
	$(CC) $(CFLAGS) $(SOURCES) -o $(NAME)

clean	:
	rm -f $(NAME)

fclean	: clean

re		: fclean all

.PHONY: all clean fclean re
