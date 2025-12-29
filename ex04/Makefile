# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skomatsu <skomatsu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/29 17:36:44 by skomatsu          #+#    #+#              #
#    Updated: 2025/12/29 17:36:45 by skomatsu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace
CXX	= c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS =		main.cpp

OBJS =		$(SRCS:.cpp=.o)
RM =		rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re