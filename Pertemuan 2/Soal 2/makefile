# Variables
CXX = g++
CXXFLAGS = -Wall
TARGET = quadraticequation
SRC = quadraticequation.cpp

# Default target: compile the program
all: $(TARGET)

# Compile the quadraticequation.cpp
$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

# Run the program in test mode
test: $(TARGET)
	./$(TARGET) 

# Clean up the compiled files
clean:
	rm -f $(TARGET)

# Phony targets to avoid conflicts
.PHONY: all clean test
