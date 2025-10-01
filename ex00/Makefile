
NAME =		zombie
CXX =		c++
CXXFLAG =	-Wall -Wextra -Werror -std=c++98
SRCS_DIR =	./srcs
INC_DIR	=	./includes

SRCS =		$(SRCS_DIR)/main.cpp \
			$(SRCS_DIR)/Zombie.cpp \
			$(SRCS_DIR)/newZombie.cpp \
			$(SRCS_DIR)/randomChump.cpp

OBJS =		$(SRCS:.cpp=.o)
INCLUDES =	-I $(INC_DIR)
RM =		rm -rf

all: $(NAME)

$(NAME):$(OBJS)
	$(CXX) $(CXXFLAG) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CCX) $(CXXFLAG) $(INCLUDES) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
