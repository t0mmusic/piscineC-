# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/01 14:02:03 by jbrown            #+#    #+#              #
#    Updated: 2022/08/01 14:02:18 by jbrown           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed

COMPILE = c++

FLAGS = -Wall -Wextra -Werror -I .

FLAGS_PLUS = -std=c++98

SRCS = *.cpp

all: $(NAME)

$(NAME):
	$(COMPILE) $(FLAGS) $(FLAGS_PLUS) $(SRCS) -o $(NAME)

clean:
	rm -f $(NAME)

re: clean all

.PHONY: all clean re