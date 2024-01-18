NAME = catsndogs

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic -fsanitize=address -g3

SRCS = Animal.cpp Dog.cpp Cat.cpp main.cpp Brain.cpp

OBJS = $(SRCS:.cpp=.o)
OBJS := $(addprefix obj/, $(OBJS))

all: $(NAME)

obj/%.o:%.cpp
	mkdir -p obj
	$(CC) -c $(CFLAGS) $< -o $@

debug: CFLAGS += -D DEBUG=1
debug: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -fr obj
fclean: clean
	rm -fr $(NAME)
re: fclean all