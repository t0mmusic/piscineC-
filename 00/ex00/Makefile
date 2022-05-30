# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/26 13:03:06 by jbrown            #+#    #+#              #
#    Updated: 2022/05/26 13:29:23 by jbrown           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

COMPILE = c++

FLAGS = -Wall -Wextra -Werror

FLAGS_PLUS = -std=c++98

SRC = megaphone.cpp

all: $(NAME)

$(NAME):
	$(COMPILE) $(FLAGS) $(FLAGS_PLUS) $(SRC) -o $(NAME)

clean:
	rm -f $(NAME)

re: clean all

.PHONY: all clean re
