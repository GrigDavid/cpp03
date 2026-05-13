CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = Fixed.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = Fixed


all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $^ -o $@

%.o: %.cpp
	$(CXX) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re