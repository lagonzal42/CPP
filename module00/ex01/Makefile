NAME = nokia3310

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

SRCS = Phonebook.cpp main.cpp Contact.cpp

OBJS = $(SRCS:.cpp=.o)
OBJS := $(addprefix obj/, $(OBJS))

DEBUG = -D DEBUG=1

all: $(NAME)

obj/%.o:%.cpp
	@mkdir -p obj
	$(CC) -c $(CFLAGS) $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

debug: CFLAGS += -D DEBUG=1
debug: $(NAME)

clean:
	@rm -fr obj
fclean: clean
	@rm -fr $(NAME)
re: clean fclean $(NAME)