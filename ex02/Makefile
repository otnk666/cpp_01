
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
