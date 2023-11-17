NAME = megaphone

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = megaphone.cpp

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -fr $(OBJS)
fclean: clean
	rm -fr $(NAME)
re: fclean all