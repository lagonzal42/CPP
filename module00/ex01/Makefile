NAME = prueba

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = Phonebook.cpp main.cpp

DEBUG = -D DEBUG=1

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

debug: CFLAGS += -D DEBUG=1
debug: $(NAME)

clean:
	@rm -fr *.o
fclean: clean
	@rm -fr $(NAME)
re: clean fclean $(NAME)