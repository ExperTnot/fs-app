CXX = g++
CXXFLAGS = -std=c++17
NAME = fs_app
SRC = filesystem_app.cpp CommandLineParser.cpp
HEADERS = CommandLineParser.hpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(NAME)
