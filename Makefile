# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -Wall -std=c++17

# Raylib specific flags (for Linux)
LIBS = -lraylib -lGL -lm -lpthread -ldl -lrt -lX11

# Target executable
TARGET = program

# Include directories
INC = -I./include

# Source files
CPP_SRCS = $(shell find -name '*.cpp')

# Default target
all: $(TARGET)

# Rule to build the target
$(TARGET): $(CPP_SRCS)
	$(CXX) $(INC) $(CXXFLAGS) $(CPP_SRCS) -o $(TARGET) $(LIBS)

# Clean rule to remove the executable
clean:
	rm -f $(TARGET)
