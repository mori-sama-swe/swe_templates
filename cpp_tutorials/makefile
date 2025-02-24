
CXX = clang++
CXXFLAGS = -std=c++11 -Wall -Wextra -Werror -Wpedantic
SRC = main.cpp
TARGET = my_program

all:
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

clean: 
	rm -f $(TARGET)

rebuild: clean all

run: all
	./$(TARGET)

.PHONY: all clean rebuild run