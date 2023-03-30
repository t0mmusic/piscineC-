# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/27 12:10:27 by jbrown            #+#    #+#              #
#    Updated: 2023/03/30 16:54:47 by jbrown           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = btc

CC = c++

FLAGS = -Wall -Wextra -Werror -I .

FLAGS_PLUS = -std=c++98

SRCS = main.cpp BitcoinExchange.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(FLAGS_PLUS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) $(FLAGS_PLUS) -c $< -o $@

clean:
	rm -f $(NAME)

fclean: clean
	rm -f $(OBJS)

re: fclean all

.PHONY: all clean fclean re
