CXX = g++
CXXFLAGS = -std=c++17
NAME = fs_app

# Automatically collect all .cpp and .hpp files in the current directory
SRC = $(wildcard *.cpp)
HEADERS = $(wildcard *.hpp)
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(NAME)

.PHONY: all clean
