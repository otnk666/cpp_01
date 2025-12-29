# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skomatsu <skomatsu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/29 17:35:00 by skomatsu          #+#    #+#              #
#    Updated: 2025/12/29 17:35:01 by skomatsu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		zombie
CXX =		c++
CXXFLAGS =	-Wall -Wextra -Werror
CXXFLAGS += -std=c++98 -pedantic
SRCS_DIR =	./srcs
INC_DIR	=	./includes

SRCS =		$(SRCS_DIR)/main.cpp \
			$(SRCS_DIR)/Zombie.cpp \
			$(SRCS_DIR)/zombieHorde.cpp

OBJS =		$(SRCS:.cpp=.o)
INCLUDES =	-I $(INC_DIR)
RM =		rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
