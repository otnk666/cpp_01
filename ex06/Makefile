
NAME = harlFilter
CXX	= c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98 -g
SRCS_DIR =	./srcs
INC_DIR	=	./includes

SRCS =		$(SRCS_DIR)/main.cpp \
			$(SRCS_DIR)/harlFilter.cpp

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
