CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -pedantic

SRCS = Encoder.cpp
OBJS = $(SRCS:.cpp=.o)
EXEC = Encoder

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(EXEC)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(EXEC) $(OBJS)