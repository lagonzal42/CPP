# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lagonzal <lagonzal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/20 15:20:36 by lagonzal          #+#    #+#              #
#    Updated: 2023/12/20 15:20:59 by lagonzal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ClapTrapTest

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

SRCS = main.cpp ClapTrap.cpp

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
	@rm -fr obj
fclean: clean
	@rm -fr $(NAME)
re: clean fclean $(NAME)