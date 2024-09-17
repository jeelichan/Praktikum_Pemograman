# Variables
CXX = g++
CXXFLAGS = -Wall
TARGET = MultiplicationTable
SRC = MultiplicationTable.cpp

# Default target: compile the program
all: $(TARGET)

# Compile the MultiplicationTable.cpp
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
