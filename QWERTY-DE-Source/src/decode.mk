CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -pedantic

SRCS = Decoder.cpp
OBJS = $(SRCS:.cpp=.o)
EXEC = Decoder

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(EXEC)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(EXEC) $(OBJS)