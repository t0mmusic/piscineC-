# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/26 14:34:27 by jbrown            #+#    #+#              #
#    Updated: 2022/05/26 14:35:36 by jbrown           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

COMPILE = c++

FLAGS = -Wall -Wextra -Werror

FLAGS_PLUS = -std=c++98

SRCS = *.cpp

all: $(NAME)

$(NAME):
	$(COMPILE) $(FLAGS) $(FLAGS_PLUS) $(SRCS) -o $(NAME)

clean:
	rm -f $(NAME)

re: clean all

.PHONY: all clean re
