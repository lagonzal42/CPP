NAME = catsndogs

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

SRCS = Animal.cpp Dog.cpp Cat.cpp main.cpp WrongCat.cpp WrongAnimal.cpp

OBJS = $(SRCS:.cpp=.o)
OBJS := $(addprefix obj/, $(OBJS))

all: $(NAME)

obj/%.o:%.cpp
	mkdir -p obj
	$(CC) -c $(CFLAGS) $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

debug: CFLAGS += -D DEBUG=1
debug: $(NAME)

clean:
	rm -fr obj
fclean: clean
	rm -fr $(NAME)
re: fclean all