# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/06 15:29:39 by vstockma          #+#    #+#              #
#    Updated: 2023/11/15 11:29:40 by vstockma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = mutant

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

CXX = c++

RM = rm -f

CXXFLAGS = -g -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re