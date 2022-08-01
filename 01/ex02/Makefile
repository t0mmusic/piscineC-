# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/30 15:31:41 by jbrown            #+#    #+#              #
<<<<<<< HEAD
#    Updated: 2022/08/01 09:29:02 by jbrown           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brain
=======
#    Updated: 2022/05/30 16:21:02 by jbrown           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = weapon
>>>>>>> eaba5975fcffc36eda0042624e8a427e184342b5

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
