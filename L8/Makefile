CXX = g++

CXXFLAGS = -Iheaders

SRC = main.cpp $(wildcard src/*.cpp)

TARGET = ../a.out

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

all: $(TARGET)

run: all
	./$(TARGET)

clean:
	rm -f $(TARGET)