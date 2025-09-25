
NAME =		zombie
CXX =		c++
CXXFLAG =	-Wall -Wextra -Werror -std=c++98
SRCS =		main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
OBJS =		$(SRCS:.cpp=.o)
RM =		rm -rf

all: $(NAME)

$(NAME):$(OBJS)
	$(CXX) $(CXXFLAG) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
