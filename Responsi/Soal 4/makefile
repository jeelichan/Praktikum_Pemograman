CXX = g++
CXXFLAGS = -Wall
TARGET = maxNumber
TARGETTEST = maxNumberTest
SRC = maxNumber.cpp
SRCTEST = maxNumberTest.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)
	rm -f $(TARGETTEST)

test: ${TARGETTEST}

$(TARGETTEST): $(SRCTEST)
	$(CXX) $(CXXFLAGS) -o $(TARGETTEST) $(SRCTEST)
	./$(TARGETTEST)


.PHONY: all clean test