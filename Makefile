CXX = g++
CXXFLAGS = -std=c++17 -Wall

TARGET = matrix_ops
OBJS = main.o matrix.o

all: $(TARGET)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -f $(TARGET) *.o
