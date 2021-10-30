NAME := puzzle

SRCS := ./src/main.cpp ./src/ReadFile.cpp

OBJS := $(SRCS:.cpp=.o)

CXX := g++

CXXFLAGS := -Wall -Wextra -Werror -std=c++11

all: $(NAME)
$(NAME): $(OBJS)
	$(CXX) $(OBJS) -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ -c $<

clean:
	@rm -rf $(OBJS)
	@echo "\033[1;32m+INFO: Objects removed!\033[0m"

fclean: clean
	@rm -rf $(NAME)
	@echo "\033[1;32m+INFO: $(NAME) removed!\033[0m"

re: fclean all