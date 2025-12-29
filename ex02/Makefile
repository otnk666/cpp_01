# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skomatsu <skomatsu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/29 17:35:13 by skomatsu          #+#    #+#              #
#    Updated: 2025/12/29 17:35:16 by skomatsu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		brain
CXX =		c++
CXXFLAGS =	-Wall -Wextra -Werror
CXXFLAGS += -std=c++98 -pedantic
SRCS =		main.cpp
OBJS =		$(SRCS:.cpp=.o)
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
