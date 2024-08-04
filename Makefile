CXX = g++
NAME = fs_app

all: $(NAME)

clean:
	rm -f $(NAME)

$(NAME) : filesystem_app.cpp 
	${CXX} -std=c++17 -o $(NAME) filesystem_app.cpp
