NAME = replace

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3 -pedantic

SRCS = main.cpp

OBJS = $(SRCS:.cpp=.o)
OBJS := $(addprefix obj/, $(OBJS))

all: $(NAME)

obj/%.o:%.cpp
	mkdir -p obj
	$(CC) -c $(CFLAGS) $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

debug: CFLAGS += -D DEBUG=1
debug: fclean $(NAME)

clean:
	@rm -fr obj
fclean: clean
	@rm -fr $(NAME)
re: clean fclean $(NAME)