# Variables
CXX = g++
CXXFLAGS = -Wall
TARGET = terbesar
TARGETTEST = terbesarTest
SRC = terbesar.cpp
SRCTEST = terbesarTest.cpp

# Default target: compile the program
all: $(TARGET)

# Compile the terbesar.cpp
$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

# Run the program
run: $(TARGET)
	./$(TARGET)

# Clean up the compiled files
clean:
	rm -f $(TARGET)
	rm -f $(TARGETTEST)

test: ${TARGETTEST}

$(TARGETTEST): $(SRCTEST)
	$(CXX) $(CXXFLAGS) -o $(TARGETTEST) $(SRCTEST)
	./$(TARGETTEST)

# Phony targets to avoid conflicts
.PHONY: all clean test