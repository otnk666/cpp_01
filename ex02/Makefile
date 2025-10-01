
NAME =		brain
CXX =		c++
CXXFLAG =	-Wall -Wextra -Werror -std=c++98

SRCS =		main.cpp

OBJS =		$(SRCS:.cpp=.o)

RM =		rm -rf

all: $(NAME)

$(NAME):$(OBJS)
	$(CXX) $(CXXFLAG) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAG) $(INCLUDES) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
