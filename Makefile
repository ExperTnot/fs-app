CXX = g++
CXXFLAGS = -std=c++17
NAME = fs_app

# Automatically collect all .cpp and .hpp files in the current directory
SRC = $(wildcard *.cpp)
HEADERS = $(wildcard *.hpp)
OBJ = $(SRC:.cpp=.o)
TEST = $(wildcard *test*)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(NAME) $(TEST)

.PHONY: all clean
